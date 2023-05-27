#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your message.\n");
    ch=getche();
    while(ch!='\r'){
        printf("%c\n",ch+1);
        ch=getche();

    }
    return 0;
}
