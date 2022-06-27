#include <iostream>

int main()
{
    int x {5};

    std::cout << x << '\n';  // print the value of variable x
    std::cout << &x << '\n'; // print the memory address of variable x

    // print the value at the memory address of variable x 
    // (parenthesis not required, but makes it easier to read)
    std::cout << *(&x) << '\n'; 

    // always initalize pointers
    int* pointerToX {&x}; // pointer that stores address of x

    std::cout << pointerToX << '\n'; // print the memory address of variable x
    std::cout << *pointerToX << '\n'; // print value at the memory address of variable x

    return 0;
}