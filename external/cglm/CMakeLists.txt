include(FetchContent)

FetchContent_Declare(
	cglm
	GIT_REPOSITORY https://github.com/recp/cglm.git
	GIT_TAG v0.8.5
	GIT_SHALLOW TRUE
	PREFIX ${CMAKE_CURRENT_BINARY_DIR}
)

FetchContent_MakeAvailable(cglm)
