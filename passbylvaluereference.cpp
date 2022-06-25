#include <iostream>

void addOne(int y) // y is a copy of x
{
    y++; // this modifies the copy of x, not the actual object x
}

void addOneRef(int& y) // y is x
{
    y++; // This modifies x
}

int main()
{
    int x {5};

    std::cout << "value before addOne = " << x << '\n';

    addOne(x);

    std::cout << "value after addOne = " << x << '\n';

    addOneRef(x);

    std::cout << "value after addOneRef = " << x << '\n';

    return 0;
}