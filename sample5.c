#include<stdio.h>
int main()
{
    int age;
    printf("ENTER YOUR AGE ");
    scanf("%d",&age);

    if (age>=18)
    {
      printf("\nYOU CAN VOTE");
      printf("\nHAPPY VOTING");
    }
    else
    {  printf("\nYOU CAN,T VOTE");
      printf("\nBETTER LUCK NEXT TIME");
    }

}   