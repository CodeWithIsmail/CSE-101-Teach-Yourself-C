#include<stdio.h>
int main()
{
    int i=1;
    again:
    printf("%d ",i);
    i++;
    if(i<11) goto again;


}
