/***
 * ---------------------------------------------------------
 * Timing Code:
 *
 *  - The simpliest for of benchmarking, to be used as a starting point.
 *  - Note:
 *      Runtime behaviour may differ from debug behaviour, as the compiler may optimizer code.
 *      Debug mode should be used, and one should be aware of the compiler's optimisation settings.
 * 
 * : Zach Wolpe
 * : zach.wolpe@medibio.com.au
 * : 06-07-2023
 * ---------------------------------------------------------
*/

#include <iostream>
#include <chrono>
#include <array>

class Timer {
private:
    std::chrono::time_point<std::chrono::high_resolution_clock> startTime;
    std::chrono::time_point<std::chrono::high_resolution_clock> stopTime;

public:
    Timer() {
        startTime = std::chrono::high_resolution_clock::now();
    }
    ~Timer() {
        std::cout << "Timer Destructor" << std::endl;
        Stop();
    }

    void Stop() {
        stopTime        = std::chrono::high_resolution_clock::now();
        auto start      = std::chrono::time_point_cast<std::chrono::microseconds>(startTime).time_since_epoch().count();
        auto end        = std::chrono::time_point_cast<std::chrono::microseconds>(stopTime).time_since_epoch().count();
        auto duration   = end - start; // microseconds
        double ms       = duration * 0.001;
        // get instance name
        std::string name = typeid(*this).name();
        std::cout << "Timer (" << name << ") took: " << duration << "us (" << ms << "ms)" << std::endl;
    }



};

int main() {
    
    int value = 0;
    Timer timer; // start timer
    for (int i; i<1000000; i++)
        value += 2;
    std::cout << "value: " << value << std::endl;
    // _debugbreak();
    

    //  shared pointer vs unique pointer
    {
        std::cout << "\n ---- Make Shared ------------" << std::endl;
        std::array<std::shared_ptr<int>, 1000> sharedPtrs;
        Timer timer;
        for (int i=0; i<sharedPtrs.size(); i++)
            sharedPtrs[i] = std::make_shared<int>();
    };


    // {
        // std::cout << "\n ---- Make Unique ------------" << std::endl;
        // std::array<std::unique_ptr<int>, 1000> uniquePtrs;
        // Timer timer;
        // for (int i=0; i<uniquePtrs.size(); i++)
        //     uniquePtrs[i] = std::make_unique<int>(new int);
            // uniquePtrs[i] = std::make_unique<int>(int());      
    // }
    
}