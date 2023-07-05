/**
 * ------------------------------------------------------
 * @file: pointers_and_referencs.cpp
 * 
 * Objective:
 *      Understand the basics of pointers and references. 
 * 
 * Notes:
 *      Pay attention to which value changes.
 *     
 * References:
 *      https://www.youtube.com/watch?v=IzoFn3dfsPA&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=17
 *      
 * : Zach Wolpe
 * : zach.wolpe@medibio.com.au
 * : 28 June 2023
 * ------------------------------------------------------
*/

#include <iostream>
#include <string>

void Incrementer_00(int value) {
    // fails, as a copy is created.
    value++;
}


void Incrementer_01(int* pointer) {
    // dereference pointer & increment value.
    // remember order of operations.
    (*pointer)++;
}

void Incrementer_02(int& reference) {
    // increment value of reference.
    reference++;
}

void log_results(std::string name, int var, int* pointer, int& reference) {
    std::cout << "-------------------------" << std::endl;
    std::cout << name << std::endl;
    std::cout << "var:                      " << var << std::endl;
    std::cout << "pointer (mem location):   " << pointer << std::endl;
    std::cout << "pointer (dereference):    " << *pointer << std::endl;
    std::cout << "reference:                " << reference << std::endl;
    std::cout << "-------------------------" << std::endl;
}

int main() {
    int var = 10;
    int* pointer = &var;
    int& reference = var;
    
    // baseline
    log_results("Base case", var, pointer, reference);

    // test 1
    log_results("Increment_00", var, pointer, reference);


    // increment 01
    Incrementer_01(pointer);
    log_results("Incrementer_01", var, pointer, reference);

    // increment 02
    Incrementer_02(reference);
    log_results("Incrementer_02", var, pointer, reference);

    // increment 03
    Incrementer_02(var);
    log_results("Incrementer_02.1", var, pointer, reference);
    return 0;
}