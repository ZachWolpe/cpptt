
/**
 * ------------------------------------------------------
 * @file: control_flow.cpp
 * 
 * Unobvious tips to handling control flow in C++.
 *      - break:  breaks a loop
 *      - return: exits the function.
 *      - continue: skips the rest of the loop and continues to the next iteration.
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

// do-while loop
// Identical to a while loop however the condition is checked at the end of the loop, ensuring 1 iteration.
void doWhiler() {
    std::cout << "doWhiler()" << std::endl;
    int i = 0;
    do {
        std::cout << " i: " << i << std::endl;
        i++;
    } while (false);
};




int main() {
    if (break_while()) std::cout << "while broken!" << std::endl;
    doWhiler();
    return 0;
}

