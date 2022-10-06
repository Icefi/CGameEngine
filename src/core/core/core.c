#include "core.h"

#include <malloc.h>
#include <stdlib.h>

struct core* CGE_Core_init(
	const char *window_title,
	unsigned int screen_x,
	unsigned int screen_y)
{
	struct core *core = malloc(sizeof(struct core));

	core->window = CGEwindow_Init(window_title, screen_x, screen_y);

	return core;
}

void CGE_Core_run(struct core *core)
{
	while (!glfwWindowShouldClose(core->window->window))
	{
		CGEwindow_on_update(core->window);
	}

	CGEwindow_Shutdown(core->window);

	exit(EXIT_SUCCESS);
}
