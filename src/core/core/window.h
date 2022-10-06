#ifndef CGE_WINDOW_H
#define CGE_WINDOW_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>

struct GLFWwindow;

typedef struct CGEwindow {
	GLFWwindow *window;

	unsigned int window_width;
	unsigned int window_height;

	char window_title[128];
} CGEwindow_t;

struct CGEwindow* CGEwindow_Init(
	const char *window_title,
	unsigned int window_width,
	unsigned int window_height);

void CGEwindow_Shutdown(struct CGEwindow *window);

void CGEwindow_on_update(const struct CGEwindow *window);

unsigned int CGEwindow_Get_width(const struct CGEwindow *window);

unsigned int CGEwindow_Get_height(const struct CGEwindow *window);

#endif
