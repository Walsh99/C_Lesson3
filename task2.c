#include<stdio.h>

int main()
{
    int number;
    printf("Enter your number: ");
    scanf("%d", &number);
    
    if(number % 4 == 0 && number % 5 == 0)
        printf("Number is divisible by both 4 and 5\n");
    else
        printf("Number is not divisible by 4 and 5\n");
    return 0;
}