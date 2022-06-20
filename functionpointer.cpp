#include <stdio.h>

int sum(int x, int y){return x + y;}

int main()
{
    int (*sumptr)(int,int) = &sum;

    printf("%d",sumptr(2,3));
    return 0;
}
