#include <stdio.h>

int main()
{
    int c[] = {2.8, 3.4, 4, 6.7, 5};
    int j, *q = c;
    for (j = 0; j < 5; j++)
    {
        printf("%d ", *c);
        ++q;
    }
    return 0;
}