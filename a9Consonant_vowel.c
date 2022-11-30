//Check whether a character is a vowel or consonant
#include<stdio.h>
int  main()
{
    char a;
    printf("Enter the character:");
    scanf("%c",&a);


    int lc,uc;
    lc=(a=='a'||a=='u'||a=='e'||a=='i'||a=='o');
    uc=(a=='A'||a=='U'||a=='E'||a=='I'||a=='O');
    if(lc||uc)
    {
        printf("the character %c is vowel.",a);
    }
    else
    {
        printf("the character %c is consonant.",a);
    } 
    return 0;
}
/*
Author:pankaj dukare
output:
        Enter the character:A
        the character A is vowel.

        Enter the character:y
        the character y is consonant.

*/