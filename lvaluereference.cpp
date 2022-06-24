#include <iostream>

int main()
{
    int x {5};      // normal integer variable
    int& ref {x};   // ref is now an alias for variable x

    std::cout << x << ref;  // print 55

    x = 6; // x has now value 6

    std::cout << x << ref; // print 66

    ref = 7; // The object being referenced (x) now has value 7

    std::cout << x << ref; // print 77
    
    return 0;
}