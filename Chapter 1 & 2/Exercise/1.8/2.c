#include<stdio.h>
float convert();
int main()
{
    printf("%.2f Pound",convert());
    return 0;
}
float convert()
{
    float dollar;
    printf("Enter amount: (Dollars)\n");
    scanf("%f",&dollar);
    return dollar/2.00;
}
