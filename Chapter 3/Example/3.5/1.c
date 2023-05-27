#include<stdio.h>
int main()
{
    int a,b;
    char ch;

    printf("Add, Subtract, Multiply, Divide?\n");

    do{
        printf("Enter first letter:");
        ch=getchar();
    }
    while(ch!='A' && ch!='S' && ch!='M' && ch!='D');
    printf("\n");

    printf("Enter two number: (a,b)\n");
    scanf("%d %d",&a,&b);
    if(ch=='A') printf("%d\n",a+b);
    else if(ch=='S') printf("%d\n",a-b);
    else if(ch=='M') printf("%d\n",a*b);
    else if(ch=='D') printf("%d\n",a/b);


}
