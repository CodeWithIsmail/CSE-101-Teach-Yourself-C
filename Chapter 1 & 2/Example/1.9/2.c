#include<stdio.h>
void outchar(char c);
int main(void){
    outchar('I');
    outchar('I');
    outchar('T');
    return 0;
}
void outchar(char c){
    printf("%c",c);
}
