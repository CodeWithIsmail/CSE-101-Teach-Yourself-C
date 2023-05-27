#include<stdio.h>
int main()
{
    int i,x;
    printf("Enter number:\n");
    scanf("%d",&x);

    for(i=x;i>=0;i--) {
      printf("%d\n",i);
    if(i==0) printf("\a");
    }
    return 0;

}

