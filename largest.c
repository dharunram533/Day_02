QUESTION:
Develop a C program to read three integer values and determine the largest among them using nested if statements.

CODE:
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("Largest = %d\n", a);
        }
        else
        {
            printf("Largest = %d\n", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("Largest = %d\n", b);
        }
        else
        {
            printf("Largest = %d\n", c);
        }
    }

    return 0;
}


OUTPUT:
Enter three numbers: 10 25 15
Largest number is 25
