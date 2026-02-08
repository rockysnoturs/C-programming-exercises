#include <stdio.h>

int main()
{
    int x, sum = 0;

    for (x = 1; x <= 100; x += 2)
    {
        printf("%d\n", x);
        sum += x;
    }

    printf("Sum = %d\n", sum);
    return 0;
}
