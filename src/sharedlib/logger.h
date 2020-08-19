#pragma once

#include <string_view>

#if defined(_WIN32) || defined(WIN32)
#    define MY_DECL_EXPORT __declspec(dllexport)
#    define MY_DECL_IMPORT __declspec(dllimport)
#else
#    define MY_DECL_EXPORT __attribute__((visibility("default")))
#    define MY_DECL_IMPORT __attribute__((visibility("default")))
#  endif

#ifdef MY_LIBRARY
#  define MY_EXPORT MY_DECL_EXPORT
#else
#  define MY_EXPORT MY_DECL_IMPORT
#endif

class MY_EXPORT Logger
{
public:
    Logger();

    void log(std::string_view s);

    static void useLogger();
};
