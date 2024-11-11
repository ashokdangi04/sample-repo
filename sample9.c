#include<stdio.h>

struct sample9
{
    char name;
    int roll;
    char stream;
    int age;
};

void main()
{  struct sample9 s[3];
   int i;
   for (i=0;i<=2;i++)
   {
     printf("\nENTER NAME OF STUDENT ");
     scanf("%c",&s[i].name);

     printf("\nENTER ROLL NUMBER ");
     scanf("%d",&s[i].roll);

     printf("\nENTER THE STREAM ");
     scanf("%c",&s[i].stream);

     printf("\nENTER THE AGE OF STUDENT ");
     scanf("%d",&s[i].age);
   }

   
     for (i=0;i<=2;i++)
     {
        printf("%c",&s[i].name);
        printf("%d",&s[i].roll);
        printf("%c",&s[i].stream);
        printf("%d",&s[i].age);
     }
     
}