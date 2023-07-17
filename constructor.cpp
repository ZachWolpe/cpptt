/**
 * ------------------------------------------------------
 * @file: constructor.cpp
 * 
 * You may wish to hide a contructor from the user, if the class is only designed to implement static functions.
 * This can be achieved by making the constructor private, setting the constructor to `delete`, or setting the class as a namespace.
 * 
 * : Zach Wolpe
 * : zach.wolpe@medibio.com.au
 * : 12 July 2023
 * ------------------------------------------------------
*/

#include <iostream>

class Class1 {
    public:
        Class1() = delete;
};

class Class2 {
    private:
        Class2() { std::cout << "Class2: " << std::endl; }
};


int main() {
    // cannot compile.
    // Class1 c1(10);
    // Class2 c2(10);
    return 0;
};