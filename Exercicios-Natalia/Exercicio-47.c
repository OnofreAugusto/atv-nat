#include <stdio.h>
int main()
{
    int num = 500;
    while (num >= 0)
    {
        printf("%d ", num);
        num = num - 50;
    }

    return 0;
}