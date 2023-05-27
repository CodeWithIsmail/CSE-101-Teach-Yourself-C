#include<stdio.h>
main()
{
    int a,b,c;

    printf("1 -> Add 2 -> Subtract\n");
    printf("Enter your choice:\n");
    scanf("%d",&c);

    printf("Enter two number:\n");
    scanf("%d %d",&a,&b);

    if(c==1) printf("Add = %d",a+b);
    if(c==2) printf("Subtract = %d",a-b);

    return 0;
}
