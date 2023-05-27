#include<stdio.h>
int main()
{
    int choice;
    float value;

    printf("1. Feet -> Meter 2. Meter -> Feet\n");
    printf("Enter choice:");
    scanf("%d",&choice);

    if(choice==1)
    {
        printf("Enter value in feet:");
        scanf("%f",&value);
        printf("%f",value/3.28);
    }
    else if(choice==2)
    {
        printf("Enter value in meter:");
        scanf("%f",&value);
        printf("%f",value*3.28);
    }
    return 0;

}
