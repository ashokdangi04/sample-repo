#include<stdio.h>
void main()
{
    int a,b,c;
    printf("ENTER THE NUMBER A ,B AND C \n");
    scanf("%d%d%d",&a,&b,&c);

    if (a>b && a>c)
    {
       printf("A IS GREATER THAN B AND C");
    }
    else if (b>a && b>c)
    {
       printf("B IS GREATER THAN A AND C");
    }
    else if (c>a && c>b)
    {
       printf("C IS GREATER THAN A AND B");
    }
    else
    {
        printf("ALL ARE EQUAL AND ANY TWO VALUE IS EQUAL");
    }
    
    
}