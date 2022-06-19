#include <iostream>

// Object-like macro without substitution text
#define PRINT_JOE

// Object-like macro with substitution text
#define FOO 9

int main()
{
#ifdef PRINT_JOE
    std::cout << "Joe\n";   // will be compiled since PRINT_JOE is defined
#endif

#ifdef FOO // This FOO doesn't get replaced because it's part of another preprocessor directive
    std::cout << FOO; // This FOO gets replaced with 9 because it;s part of the normal code
#endif

#ifdef PRINT_BOB
    std::cout << "Bob\n"    // will be ignored since PRINT_BOB is not defined
#endif

    return 0;
}