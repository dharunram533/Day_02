QUESTION:
Write a C program to determine whether a given integer is divisible by both 5 and 11. Display an appropriate message.

CODE:
#include <stdio.h>

int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n % 5 == 0 && n % 11 == 0)
    {
        printf("%d is divisible by both 5 and 11.\n", n);
    }
    else
    {
        printf("%d is not divisible by both 5 and 11.\n", n);
    }

    return 0;
}

OUTPUT:
Enter a number: 55
The number is divisible by both 5 and 11
