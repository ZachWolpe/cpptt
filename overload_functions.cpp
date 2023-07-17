/**
 * ------------------------------------------------------
 * @file: overload_functions.cpp
 * 
 * It is possible to overload a function to:
 *      - access private variables.
 * 
 * : Zach Wolpe
 * : zach.wolpe@medibio.com.au
 * : 17 July 2023
 * ------------------------------------------------------
*/

#include <iostream>


class myClass {
private:
    int myPrivateVar = 133;

public:
    void function_internal() {
        std::cout << "integer: " << myPrivateVar << std::endl;
    }

    void function_external(int integer) {
        std::cout << "integer: " << integer << std::endl;
    }

    void function_external() {function_external(myPrivateVar);};
};


int main() {
    myClass mc = myClass();
    mc.function_internal();
    // mc.function_external(mc.myPrivateVar); // CANNOT COMPILE!
    // So how can we access myPrivateVar? -- OVERLOAD the function.
    mc.function_external();

    return 0;
}