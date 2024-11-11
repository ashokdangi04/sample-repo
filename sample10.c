#include<stdio.h>

enum papercodes {computer=201,math=207,eng=210};

int main()
{ 
enum papercodes paper;
paper = computer;
printf("\nToday the exam is of paper code : %d",paper);
    
}
