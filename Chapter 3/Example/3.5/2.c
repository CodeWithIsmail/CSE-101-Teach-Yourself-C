#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;

    do{
        ch=getche();
    }
    while(ch!='q');

    printf("Found the q.\n");

    return 0;
}
