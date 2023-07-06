/***
 * ---------------------------------------------------------
 * Enums:
 *      An enum is a user-defined type consisting of a set of named constants called enumerators.
 *      It is simply an integer assigned a name.
 * 
 * : Zach Wolpe
 * : zach.wolpe@medibio.com.au
 * : 06-07-2023
 * ---------------------------------------------------------
*/


#include <iostream>

enum Colour {RED, BLUE, GREEN};

enum c_value {
    RED_2     = 0,
    BLUE_2    = 1,
    GREEN_2   = 2
};

// the sequence of integers will be incremented by 1
enum e3 {RED_3=7, BLUE_3, GREEN_3};

// default 32bit integers, but type can be changed (it has to be an integer).
enum e4 : unsigned char {RED_4=7, BLUE_4, GREEN_4};

// example

int main() {
    Colour   c = RED;
    c_value c2 = RED_2;
    e3      c3 = GREEN_3;
    e4      c4 = BLUE_4;
    std::cout << static_cast<int>(c) << std::endl;
    std::cout << "c2: " << c2 << std::endl;
    std::cout << "c3: " << c3 << std::endl;
    std::cout << "c4: " << c4 << std::endl;

    return 0;
}