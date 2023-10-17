#include<stdio.h>

int main()
{
    float number;
    printf("Enter your number: ");
    scanf("%f", &number);
    
    if(number > 0)
        printf("Number is positive\n");
    else if(number < 0)
        printf("Number is negative\n");
    else
        printf("Number is 0\n");
    return 0;
}