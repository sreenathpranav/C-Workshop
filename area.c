//Q1. Write a c program to calculate the area of a rectangle:
//a) using hardcoded inputs & 
//b) using inputs supplied by the user

#include<stdio.h>
void main()
{
/*int length=3, breadth=8;
int area= length* breadth;
printf("The area of this rectangle is %d",area);*/

int length,breadth;
printf("What is the length of the rectangle\n");
scanf("%d", &length);

printf("What is the breadth of the recatangle\n");
scanf("%d",&breadth);

//area=length*breadth;
  
printf("The area of this rectangle is %d", length*breadth);
}
