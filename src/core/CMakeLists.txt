set(target_name cgamecore)

add_library(${target_name} STATIC
	core/core.c
	core/core.h
	core/window.c
	core/window.h
)

include(CompileOptions)
set_compile_options(${target_name})

target_link_libraries(${target_name}
	glad
	glfw
	cglm
)

target_include_directories(
	${target_name}
	PUBLIC
		${CMAKE_CURRENT_LIST_DIR}
)
