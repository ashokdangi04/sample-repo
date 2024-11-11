#include<stdio.h>
void main()
{
    int i,n,sum=0;

    printf("ENTER THE NUMBER ");
    scanf("%d",&n);

    for ( i=1; i<=n;i++)
        sum += i;
    printf("Sum = %d",sum);

}