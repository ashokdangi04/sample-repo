#include<stdio.h>
void main()
{
    int i,n,sum=0;

    printf("Enter the Number ");
    scanf("%d",&n);

    for ( i=1; i<=n;i++)
        sum += i;
    printf("Sum = %d",sum);

}