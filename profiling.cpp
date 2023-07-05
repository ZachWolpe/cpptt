/**
 * ------------------------------------------------------
 * @file: profiling.cpp
 * 
 * Objective:
 *      Profiling c++ code to understand runtime (CPU & RAM) performance.
 * 
 * Notes:
 *      Better tools are available.
 * 
 * Run:
 *      $ gcc -pg *.cpp -o app
 *     gcc -pg /Users/zachwolpe/Desktop/µπ/EECS/cpptt/profiling.cpp -o app
 * clear; g++ -pg /Users/zachwolpe/Desktop/µπ/EECS/cpptt/profiling.cpp -o app
 && g++ profiling.cpp -o profiling  
 *     
 * References:
 *      https://riptutorial.com/cplusplus/example/19028/profiling-with-gcc-and-gprof
 * 
 * : Zach Wolpe
 * : zach.wolpe@medibio.com.au
 * : 28 June 2023
 * ------------------------------------------------------
*/



#include <iostream>

int main() {
    int a = 123456;
    std::cout << a << std::endl;

    return 0;
};

// https://docs.godotengine.org/en/stable/contributing/development/debugging/index.html