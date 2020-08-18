add_library(staticlib STATIC consolelogger.cpp consolelogger.h)
target_link_libraries(staticlib sharedlib)
target_include_directories(staticlib PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)
