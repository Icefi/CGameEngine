#include "window.h"

#include <malloc.h>
#include <string.h>
#include <stdio.h>

static int s_glfw_initialised = 0;

struct CGEwindow* CGEwindow_Init(
	const char *window_title,
	unsigned int window_width,
	unsigned int window_height)
{
	struct CGEwindow *window = malloc(sizeof(struct CGEwindow));

	strcpy(window->window_title, window_title);
	window->window_width = window_width;
	window->window_height = window_height;

	if (!s_glfw_initialised)
	{
		if (!glfwInit())
		{
			fprintf(stderr, "Error: GLFW initialisation failed");
			return NULL;
		}

		s_glfw_initialised = 1;
	}

	window->window = glfwCreateWindow(window_width, window_height, window_title, NULL, NULL);

	if (!window->window)
	{
		fprintf(stderr, "Error: window creation failed");
		return NULL;
	}

	glfwMakeContextCurrent(window->window);

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		fprintf(stderr, "Error: GLAD initialisation failed");
		return NULL;
	}

	return window;
}

void CGEwindow_Shutdown(struct CGEwindow *window)
{
	glfwDestroyWindow(window->window);
	glfwTerminate();
}

void CGEwindow_on_update(const struct CGEwindow *window)
{
	glClearColor(1, 0, 0, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	glfwSwapBuffers(window->window);
	glfwPollEvents();
}

unsigned int CGEwindow_Get_width(const struct CGEwindow *window)
{
	return window->window_width;
}

unsigned int CGEwindow_Get_height(const struct CGEwindow *window)
{
	return window->window_height;
}
