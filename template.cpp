
/**
 * ------------------------------------------------------
 * @file: template.cpp
 * 
 * Understanding the basics of templates.
 * 
 * Template:
 *  - A template is a blueprint or formula for creating a generic class or a function.
 *  - It is only created when required:if not called, it is not compiled.
 *  - Templates are evaluated at compile time.
 * 
 * Guidelines:
 *  - Templates are not classes or functions.
 *  - View the template as: the compiler is writing code for you given the input parameters.
 *  - WARNING: complexity can grow exponentially, which can be very difficult to debug. 
 * 
 * : Zach Wolpe
 * : zach.wolpe@medibio.com.au
 * : 05 July 2023
 * ------------------------------------------------------
*/

#include <iostream>
#include <string>

// example 1 ------------------------------>>
template<typename T>
void print(T value) {
    std::cout << value << std::endl;
}
// example 1 ------------------------------>>


// example 2 ------------------------------>>
template<typename T, int N>
class Array {
private:
    T m_array[N];
public:
    int GetSize() const {return N;}
};
// example 2 ------------------------------>>



int main() {
    // example 1 ------------------------------>>
    print<int>(5);
    print<std::string>("Hello");
    print("Hi there!"); // compiler will infer type
    print<float>(6.7f);

    // example 2 ------------------------------>>
    Array<int, 5> array;
    std::cout << array.GetSize() << std::endl;
    return 0;
}