
/**
 * ------------------------------------------------------
 * @file: control_flow.cpp
 * 
 * Unobvious tips to handling control flow in C++.
 * 
 * : Zach Wolpe
 * : zach.wolpe@medibio.com.au
 * : 03 July 2023
 * ------------------------------------------------------
*/

#include <iostream>

// a while loop can be broken with a return value;
int break_while (int i=10) {
    std::cout << "break_while()" << std::endl;
    int ii = 0;
    while (true) {
        if (ii == i) return true;
        std::cout << "  i: " << ii << std::endl;
        ii++;
    }
};


int main() {
    if (break_while()) std::cout << "while broken!" << std::cout;
    return 0;
}

