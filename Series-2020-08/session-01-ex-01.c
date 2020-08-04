/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int AreaOfRectange(int edge1, int edge2)
{
    int area;
    area = edge1 * edge2;
    return area;
}

int AreaOfSquare ( int edge ) 
{
    return AreaOfRectange(edge, edge);
}

int main()
{
    printf("Prepare a program to print area and perimeter of a square and rectange\n");
    int area , sqarea;
    int e1, e2 , sqedge;
    e1 = 10;
    e2 = 15;
    sqedge = 6;
    
    area = AreaOfRectange(e1,e2);
    printf("Area of Rectange with edge %d and %d is: %d\n" , e1, e2, area );
    
    area = AreaOfSquare(e1);
    printf("Area of Square with edge %d is: %d\n" , e1, area );

    return 0;
}
