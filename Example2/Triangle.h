#ifndef ETSAI_DLLEXAMPLE_TRIANGLE
#define ETSAI_DLLEXAMPLE_TRIANGLE

// Generic helper definitions for shared library support
#if defined _WIN32 || defined __CYGWIN__
  #define TRIANGLE_HELPER_DLL_IMPORT __declspec(dllimport)
  #define TRIANGLE_HELPER_DLL_EXPORT __declspec(dllexport)
  #define TRIANGLE_HELPER_DLL_LOCAL
#else
  #if __GNUC__ >= 4
    #define TRIANGLE_HELPER_DLL_IMPORT __attribute__ ((visibility ("default")))
    #define TRIANGLE_HELPER_DLL_EXPORT __attribute__ ((visibility ("default")))
    #define TRIANGLE_HELPER_DLL_LOCAL  __attribute__ ((visibility ("hidden")))
  #else
    #define TRIANGLE_HELPER_DLL_IMPORT
    #define TRIANGLE_HELPER_DLL_EXPORT
    #define TRIANGLE_HELPER_DLL_LOCAL
  #endif
#endif

// Now we use the generic helper definitions above to define TRIANGLE_API and TRIANGLE_LOCAL.
// TRIANGLE_API is used for the public API symbols. It either DLL imports or DLL exports (or does nothing for static build)
// TRIANGLE_LOCAL is used for non-api symbols.

#ifdef TRIANGLE_DLL // defined if TRIANGLE is compiled as a DLL
  #ifdef TRIANGLE_DLL_EXPORTS // defined if we are building the TRIANGLE DLL (instead of using it)
    #define TRIANGLE_API TRIANGLE_HELPER_DLL_EXPORT
  #else
    #define TRIANGLE_API TRIANGLE_HELPER_DLL_IMPORT
  #endif // TRIANGLE_DLL_EXPORTS
  #define TRIANGLE_LOCAL TRIANGLE_HELPER_DLL_LOCAL
#else // TRIANGLE_DLL is not defined: this means TRIANGLE is a static lib.
  #define TRIANGLE_API
  #define TRIANGLE_LOCAL
#endif // TRIANGLE_DLL

#include <unordered_map>
#include <string>

class TRIANGLE_API Triangle {
public:
    Triangle(double base, double height);

    double area();
    double perimeter();
private:
    double base, height;
    std::unordered_map<std::string, double> attrs;
};

#endif
