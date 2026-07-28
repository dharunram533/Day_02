QUESTION:
Write a program that accepts the x and y coordinates of a point and determines in which quadrant the point lies.

CODE:
#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter x and y coordinates: ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
    {
        printf("Point lies in First Quadrant.\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("Point lies in Second Quadrant.\n");
    }
    else if (x < 0 && y < 0)
    {
        printf("Point lies in Third Quadrant.\n");
    }
    else if (x > 0 && y < 0)
    {
        printf("Point lies in Fourth Quadrant.\n");
    }
    else if (x == 0 && y == 0)
    {
        printf("Point lies at the Origin.\n");
    }
    else if (x == 0)
    {
        printf("Point lies on the Y-axis.\n");
    }
    else
    {
        printf("Point lies on the X-axis.\n");
    }

    return 0;
}


OUTPUT:
Enter x and y coordinates: 5 8
The point lies in First Quadrant


Enter x and y coordinates: -4 6
The point lies in Second Quadrant


Enter x and y coordinates: -3 -7
The point lies in Third Quadrant


Enter x and y coordinates: 4 -5
The point lies in Fourth Quadrant
