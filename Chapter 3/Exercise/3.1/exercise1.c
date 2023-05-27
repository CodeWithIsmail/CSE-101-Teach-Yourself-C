#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    char lowest='z';
    for(int i=1;i<=10;i++){
       ch=getche();
     if(ch<lowest)
        lowest=ch;

    }

    printf("The earliest alphabet: %c\n",lowest);

    return 0;
}
