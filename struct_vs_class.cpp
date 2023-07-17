/**
 * ------------------------------------------------------
 * @file: struct_vs_class.cpp
 * 
 * The only actual difference between a `struct` (structure) and `class` is the default access level.
 * `struct`: default public
 * `class` : default private
 * 
 * Usage:
 *    - `struct` for POD (Plain Old Data) objects.
 *    - `class` for objects with private members.
 * 
 * Legacy:
 *   - `struct` is used for backwards compatibility with C.
 *   - `class` is used for C++.
 * 
 * : Zach Wolpe
 * : zach.wolpe@medibio.com.au
 * : 12 July 2023
 * ------------------------------------------------------
*/

#include <iostream>

struct myStruct {
    // public by default
    int x = 10;
};

class myClass {
    // private by default
public:
    int x = 10;
};

int main() {
    myClass c;
    myStruct s;
    std::cout << c.x << std::endl;
    std::cout << s.x << std::endl;
    return 0;
}