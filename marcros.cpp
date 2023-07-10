

// MACRO --------------------------------------------------------------->>
// to automatically generate the name of a function 
// use a macro to automatically generate the name of a function
#define PROFILING 1
#if PROFILING
#define PROFILING_SCOPE(name) CPUProfiler timer##__LINE__(name)
#define PROFILE_FUNCTION() PROFILING_SCOPE(__FUNCTION__)
#else
#define PROFILING_SCOPE(name)
#endif
// MACRO --------------------------------------------------------------->>