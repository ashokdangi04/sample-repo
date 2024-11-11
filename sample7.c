#include<stdio.h>
void main()
{
    int i,n,t;
    printf("\nENTER ANY NUMBER FOR TABLE GENERATION ");
    scanf("%d",&n);

    for ( i = 1; i <= 10; i++)
    {
        (t=n*i);
        printf("\n%d",t);
    }

}