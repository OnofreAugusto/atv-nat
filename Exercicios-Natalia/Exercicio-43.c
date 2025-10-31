#include <stdio.h>
int main()
{
    int num = 30;
    while (num >= 1)
    {
        if (num % 4 == 0)
{
    printf("[%d] ", num);
}

        printf("%d ", num);
        num--;

    }


    return 0;
}
