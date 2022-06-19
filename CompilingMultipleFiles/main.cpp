#include <iostream>
using namespace std;

// Needed so main.cpp knows that add() is a
// function defined elsewhere
int add(int x, int y);

int main()
{
    cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;
}