QUESTION:
Write a program to check whether the entered year is a leap year according to the Gregorian calendar rules.

CODE:
#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("%d is a Leap Year.\n", year);
    }
    else if (year % 100 == 0)
    {
        printf("%d is Not a Leap Year.\n", year);
    }
    else if (year % 4 == 0)
    {
        printf("%d is a Leap Year.\n", year);
    }
    else
    {
        printf("%d is Not a Leap Year.\n", year);
    }

    return 0;
}

OUTPUT:
Enter year: 2024
2024 is a Leap Year
