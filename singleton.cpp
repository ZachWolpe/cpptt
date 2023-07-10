/**
 * ------------------------------------------------------
 * @file: singleton.cpp
 * 
 * Objective:
 *      Return a single instance of a class wherever referenced.
 * 
 * Explanation:
 *       The `Get()` method is a static method that returns an instance of the `myClass` class.
 *       The method is declared as static so that it can be called without an instance of the class being created.
 *       The method returns a reference to a static instance of the `myClass` class which is created the first time the method is called.
 *       This is known as the **Singleton** pattern
 * 
 * 
 * Notes:
 *      Pay attention to which value changes.
 * 
 * References:
 *     
 * : Zach Wolpe
 * : zach.wolpe@medibio.com.au
 * : 10 July 2023
 * ------------------------------------------------------
*/

#include <iostream>

class myClass {
public:
    static myClass& Get() {
        static myClass instance;
        return instance;
    }
};


int main() {
    myClass& myclass1 = myClass::Get();
    myClass& myclass2 = myClass::Get();
    std::cout << "my Class 1 " << &myclass1 << std::endl;
    std::cout << "my Class 2 " << &myclass2 << std::endl;
    std::cout << "(Class 1 == Class 2) = " << (&myclass1 == &myclass2) << std::endl;
    return 0;
}