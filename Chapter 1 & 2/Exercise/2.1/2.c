#include<stdio.h>
main()
{
   int n;
    printf("Enter number:");
    scanf("%d",&n);
    if(n%2==0) printf("Even number.");
    if(n%2!=0) printf("Odd number.");
    return 0;
}
