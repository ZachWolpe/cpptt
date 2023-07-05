/**
 * ------------------------------------------------------
 * @file: const.cpp
 * 
 * Objective:
 *      Understand the implecations of `const`.
 * 
 * Notes:
 *      Pay attention to which value changes.
 * 
 * References:
 *     
 * : Zach Wolpe
 * : zach.wolpe@medibio.com.au
 * : 28 June 2023
 * ------------------------------------------------------
*/

 

class myClass {
    public:
    // v───v───v───v───v───v───v───v───v───v───v───v─┬┐
    //                                               ││
    //  v──#1    v─#2             v──#3    v─#4      #5
        int const* const Method(int const* const&) const;
};
   

/**
 * Explanation
 * 
 *      1. The int returned by the Method is const.
 *      2. The pointer * to the left is const.
 *      3. The int to the left is const. It may not be chanced to a different value.
 *      4. The pointer to the left is const. It may not be changed to point to a different address.
 *      5. The entire function declaration to the left is const. It is necessarily a member function rather than a free function.
 *         The input parameters are not updated in this method.
 *  
*/

// https://medium.com/p/3346ae83c41/edit
int main() {
    myClass myclass = myClass();
    return 0;
}

