#ifndef CGE_CORE_H
#define CGE_CORE_H

#include "window.h"

typedef struct core {
	struct CGEwindow *window;
} core_t;

struct core* CGE_Core_init(
	const char *window_title,
	unsigned int screen_x,
	unsigned int screen_y
);

void CGE_Core_run(struct core *core);

#endif
