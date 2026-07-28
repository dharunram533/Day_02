QUESTION:
If the triangle is valid, classify it as Equilateral, Isosceles, or Scalene based on the lengths of its sides.

CODE:
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        if (a == b && b == c)
        {
            printf("Equilateral Triangle\n");
        }
        else if (a == b || b == c || a == c)
        {
            printf("Isosceles Triangle\n");
        }
        else
        {
            printf("Scalene Triangle\n");
        }
    }
    else
    {
        printf("Not a Triangle\n");
    }

    return 0;
}

OUTPUT:
Enter three sides: 5 5 5
Triangle is Equilateral


Enter three sides: 5 5 8
Triangle is Isosceles


Enter three sides: 5 6 7
Triangle is Scalene
