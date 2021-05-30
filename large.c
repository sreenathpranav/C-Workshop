//Qn.5  Read two no's and find largest

#include<stdio.h>
void main()
{
int a,b;
printf("Enter the two numbers:");
scanf("%d%d",&a,&b);

if(a<b){
printf("The largest number is %d\n",a);
}
else{
printf("The largest number is %d\n",b);
}
}
