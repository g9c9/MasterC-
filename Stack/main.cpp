#include "Stack.h"
#include <iostream>

void printStack(Stack<int> s)
{
    std::cout << s << '\n';
}

int main()
{
    Stack<int> s1{};
    printStack(s1);
    s1.push(1);
    printStack(s1);
    s1.push(9);
    std::cout << s1.peek() << '\n';
    printStack(s1);
    std::cout << s1.pop() << '\n';
    printStack(s1);
    std::cout << s1.pop() << '\n';
    printStack(s1);

    Stack<int> s2{9, 3, 1, 2, 5};
    printStack(s2);
}