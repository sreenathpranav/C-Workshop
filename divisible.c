//Qn.4 Write a progrm to determine wheter a number is divisible by 5

#include<stdio.h>
void main()
{
int no;
printf("Enter the number\n");
scanf("%d",&no);
printf("Divisibility test returns:%d\n",no%5);     //50/5=10 ->0, 32/5=6 ->2
}
