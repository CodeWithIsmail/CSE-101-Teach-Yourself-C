#include<stdio.h>
int main()
{
    int n,i,c=0;
    printf("Enter number:\n");
    scanf("%d",&n);

    for(i=2;i<n;i=i+1){
        if(n%i==0){
            c=1;
            break;
        }
    }
    if(c==0) printf("Prime.");
    else printf("Not prime.");

    return 0;
}
