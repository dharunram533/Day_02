QUESTION:
Write a program to determine whether the entered number is positive, negative, or zero using decision control statements.

CODE:
#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("%d is a Positive number.\n", num);
    }
    else if (num < 0)
    {
        printf("%d is a Negative number.\n", num);
    }
    else
    {
        printf("The number is Zero.\n");
    }

    return 0;
}

OUTPUT:
Enter a number: 25
The number is Positive


Enter a number: -10
The number is Negative


Enter a number: 0
The number is Zero
