//Qn.7 Write a program to read a no and determine whether a number is divisible by 5 and 7

#include<stdio.h>
void main()
{
int no;
printf("Enter the number:");
scanf("%d",&no);
if(no%5==0 && no%7==0)
{
    printf("The no is divisible by 5 and 7\n");
}
else{
printf("Not divisible by 5 and 7\n");     
}
}
