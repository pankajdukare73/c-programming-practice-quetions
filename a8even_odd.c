//Check whether a number is even or odd
#include<stdio.h>
int  main()
{
    int a;
    printf("enter the number to check its even or not:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("the number %d is even.",a);
    }
    else
    {
        printf("the number %d is odd.",a);
    }
    return 0;
}
/*
Author:pankaj dukare
output:
        enter the number to check its even or not:78
        the number 78 is even.

        enter the number to check its even or not:29
        the number 29 is odd.
*/