#include <stdio.h>
#include <iostream>
using namespace std;
void see()
{
    int i = 0;
    int sum = 0;
    while (i < 100)
    {
        sum = sum + i;
        sum = i + sum;
        printf("sum: %d, i: %d \n", sum, i);
        i += 1;
    }
    printf("%d", sum);
}

int main()
{
    see();
}