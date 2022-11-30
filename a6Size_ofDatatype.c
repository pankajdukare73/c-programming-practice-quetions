//C program to find the size of int, float, double and char
#include<stdio.h>
int  main()
{
    int a;
    printf("Size of integer is %d.",sizeof(a));

    float b;
    printf("\nSize of float is %d.",sizeof(b));

    char c;
    printf("\nSize of char is %d.",sizeof(c));

    double d;
    printf("\nSize of double is %d.",sizeof(d));
   
    return 0;
}
/*
Author:pankaj dukare
output:
        Size of integer is 4.
        Size of float is 4.
        Size of char is 1.
        Size of double is 8.
*/