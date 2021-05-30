//Q2. Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit)

#include<stdio.h>
void main(){

//hardcoded input
    /*float celsius = 37,far;  
    far =(celsius *9/5)+32; 
    printf("The value of this celsius temperature in Fahrenheit is %f\n",far);*/
    
//user-input    
    float celsius,far;
    printf("Enter the value of temperature in celsius: ");
    scanf("%f",&celsius);
    far =(celsius *9/5)+32;
    printf("The value of this celsius temperature in Fahrenheit is %f\n",far);
  
}
