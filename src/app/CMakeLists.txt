set(target_name app)

add_executable(
	${target_name}
	app/main.c
)

include(CompileOptions)
set_compile_options(${target_name})

target_link_libraries(${target_name} cgamecore)

target_include_directories(
	${target_name}
	PRIVATE
		${CMAKE_CURRENT_LIST_DIR}
)


