#include<stdio.h>
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);

    if(n<0) printf("Negative");
    else printf("Non-Negaitve");

    return 0;
}
