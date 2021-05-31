//Qn.9  Read three no's and find largest

#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter the three numbers: ");
scanf("%d %d %d",&a,&b,&c);

if(a>b && a>c)                                 
printf("The largest number is %d\n",a);

else if(b>a && b>c)
printf("The largest number is %d\n",b);

else
printf("The largest number is %d\n",c);
}
