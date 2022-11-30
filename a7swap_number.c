//C program to swap two numbers
#include<stdio.h>
int  main()
{
    int a,b;
    printf("Enter the two number:");
    scanf("%d %d",&a,&b);
    printf("\n1.using temp variable:");
    printf("\nthe number before swaping is a=%d and b=%d",a,b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nthe number after swaping is a=%d and b=%d",a,b);

    printf("\n\n2.without using temp variable:");
     printf("\nthe number before swaping is a=%d and b=%d",a,b);
    a=a-b;
    b=b+a;
    a=b-a;
    printf("\nthe number after swaping is a=%d and b=%d",a,b);
    
    return 0;
}
/*
Author:pankaj dukare
output:
        1.using temp variable:
        the number before swaping is a=45 and b=78
        the number after swaping is a=78 and b=45

        2.without using temp variable:
        the number before swaping is a=78 and b=45
        the number after swaping is a=45 and b=78
*/