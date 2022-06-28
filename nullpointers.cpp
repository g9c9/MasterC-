#include <iostream>

int main()
{
    int x {5};
    int* ptr {&x};

    // pointers convert to Boolean false if they are null, and Boolean true if they are non-null
    // if (ptr == nullptr) // explicit test for equivalence
    if (ptr) // implicit test for equivalence
        std::cout << "ptr is non-null\n";
        // std::cout << "ptr is null\n"; // for explicit test
    else
        std::cout << "ptr is null\n";
        // std::cout << "ptr is non-null\n"; // for explicit test
    
    int* nullPtr {}; // value initializing this pointer to be nullptr
    std::cout << "nullPtr is " << (nullPtr==nullptr ? "null\n" : "non-null\n"); // explicit test for equivalence

    return 0;
}