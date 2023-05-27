#include<stdio.h>
main()
{
    int a,b,c;

    printf("Enter two number:\n");
    scanf("%d %d",&a,&b);

    printf("1 -> Sum 2 -> Product\n");
    printf("Enter your choice:\n");

    scanf("%d",&c);

    if(c==1) printf("Sum = %d",a+b);
    if(c==2) printf("Product = %d",a*b);

    return 0;
}
