#include <iostream>

/* Compilers find it efficient to store things
   in blocks of 4 bytes */

struct struct1
{
    char a; // 1 byte
    // 1 byte padding
    short b; // 2 bytes
    int c; // 4 bytes
};

/* If I had struct2 like this, then I would get this padding for a total
   of 12 bytes:
struct struct2
{
    char a; // 1 byte
    char b; // 1 byte
    // 2 byte padding
    int c; // 4 byte
    short d; // 2 byte
    // 2 byte padding 
};
*/

// By reordering the data, I can structure this to get 8 bytes:
struct struct2
{
    char a; // 1 byte
    char b; // 1 byte
    short d;// 2 bytes
    int c;  // 4 bytes
};

int main()
{
    std::cout << sizeof(struct1) << '\n';
    std::cout << sizeof(struct2) << '\n';
    return 0;
}