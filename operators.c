QUESTION:
A student passes only if he/she scores at least 40 marks in every subject. Write a program to determine whether the student has passed or failed after accepting marks in five subjects.

CODE:
#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5;

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    if (m1 >= 40 && m2 >= 40 && m3 >= 40 && m4 >= 40 && m5 >= 40)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}

OUTPUT:
Enter marks of five subjects:
91 88 89 95 90
Student Passed
