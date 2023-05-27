#include<stdio.h>
int main()
{
    float edays; //edays for earth days, jyears for jupiter years
    printf("Enter Earth days:");
    scanf("%f",&edays);

    printf("Equivalent Jovian Years: %f",edays/(365*12));

    return 0;


}
