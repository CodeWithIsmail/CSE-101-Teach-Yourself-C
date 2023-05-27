#include<stdio.h>
int main()
{
    printf("ASCII Code for A-Z:\n");
    for(char ch='A';ch<='Z';ch++){
        printf("%d ",ch);
    }
    printf("\nASCII Code for a-z:\n");

    for(char ch='a';ch<='z';ch++){
        printf("%d ",ch);
    }

    return 0;
}
