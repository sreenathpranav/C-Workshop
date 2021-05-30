/*Qn.6 Program to read a no and check whether the given no is odd or even*/

#include<stdio.h>
void main()
{
int no;
printf("Enter the number:");
scanf("%d",&no);
if(no%2==0)
{
printf("Even number\n");
}
else
{
printf("Odd number\n");
}
}
