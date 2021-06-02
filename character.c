//Qn.8 Program to read an alphabet and check whether the given alphabet is 'a' or 'e'
#include<stdio.h>
void main()
{
    char character;
    printf("Enter the character in small letters:");
    scanf("%c",&character);     // ' ' is compulsory
    if(character=='a' || character =='e' )   //OR operator
    {
        printf("TRUE\n");
    }
    else{
        printf("FALSE\n");
    }
}
