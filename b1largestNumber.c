//Find the largest number among three numbers
#include<stdio.h>
int  main()
{
    int a,b,c;
    printf("Enter the three number:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("the number %d is greater than %d and %d.",a,b,c);
        }
        else
        {
             printf("the number %d is greater than %d and %d.",c,a,b);
        }
    }else 
    if(b>c)
    {
         printf("the number %d is greater than %d and %d.",b,a,c);
    }
    else{
         printf("the number %d is greater than %d and %d.",c,a,b);
    }
    
    return 0;
}
/*
Author:pankaj dukare
output:
        Enter the three number:45 63 12
        the number 63 is greater than 45 and 12.
*/