#include<stdio.h>
int main()
{
    float value;
    int choice;

    printf("Enter value:");
    scanf("%f",&value);

    printf("1. Feet -> Meter 2. Meter -> Feet\n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);

    if(choice==1) printf("%f",value/3.28);
    else if(choice==2) printf("%f",value*3.28);
    else printf("Invalid choice.");

}
