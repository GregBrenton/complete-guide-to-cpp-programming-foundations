// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 5;

int main(){
    bool my_flag;
    a = 7;
    my_flag = false;
    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "flag = " << my_flag << "\n";
    my_flag = true;
    std::cout << "flag = " << my_flag << "\n";
    std::cout << "a + b = " << a + b << "\n";
    std::cout << "b - a = " << b - a << "\n";
    unsigned int positive;
    positive = b - a;
    std::cout << "b - a (unsigned) = " << positive << "\n";
    
    std::cout << std::endl << std::endl;
    return 0;
}
