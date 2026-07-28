#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("The given sides form a triangle.");
    }
    else
    {
        printf("The given sides do not form a triangle.");
    }

    return 0;
}
