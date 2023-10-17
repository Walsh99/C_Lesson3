#include<stdio.h>

int main()
{
    float temperature;
    printf("Enter current temperature: ");
    scanf("%f", &temperature);
    
    if(temperature > 20)
        printf("no need for a jacket\n");
    else if(temperature > 10)
        printf("take a light jacket\n");
    else
        printf("bring a warm jacket\n");
    return 0;
}