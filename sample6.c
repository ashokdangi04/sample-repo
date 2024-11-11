#include<stdio.h>
void main()
{
    int n,i;
    printf("ENTER ANY NUMBER ");
    scanf("%D",&n);

    for ( i = 0; i < n; i++)
        if (i%2 == 0)
        {
            printf("\n%d",i);
        }
        printf("\n\nGIVEN NUMBER IS EVEN");

    for ( i = 1; i < n; i++)
            if (i%2 == 1)
            {
                printf("\n%d",i);
            }
            printf("\n\nGIVEN NUMBER IS ODD");
    
}