#include<stdio.h>
int main()
{
    int a,b;
    char ch;

    printf("Add, Subtract, Multiply, Divide?\n");
    do{
        printf("Enter first letter\n");
        ch=getche();

    }
    while(ch!='A' && ch!='S' && ch!='M' && ch!='D');

    printf("\nEnter two number (a,b)\n");
    scanf("%d %d",&a,&b);

    switch(ch){
        case 'A': printf("%d\n",a+b);
        break;
        case 'S': printf("%d\n",a-b);
        break;
        case 'M': printf("%d\n",a*b);
        break;
        case 'D': if(b!=0) printf("%d\n",a/b);
    }

}
