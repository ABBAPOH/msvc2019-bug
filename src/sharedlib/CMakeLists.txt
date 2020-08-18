add_library(sharedlib SHARED logger.cpp logger.h)
target_compile_definitions(sharedlib PRIVATE MY_LIBRARY)
target_include_directories(sharedlib PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)
