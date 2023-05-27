#include<stdio.h>
int main()
{
    int i,j;
    int total=0;
    do{
        printf("Enter next number: (0 to stop)\n");
        scanf("%d",&i);
        printf("Enter again:\n");
        scanf("%d",&j);
        if(i!=j) {
                printf("Mismatch\n");
                continue;
        }
        total=total+i;
    }
    while(i!=0);

        printf("Total = %d\n",total);
}
