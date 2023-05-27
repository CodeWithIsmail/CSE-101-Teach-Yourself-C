#include<stdio.h>
int main()
{
    int ans;
    printf("10+14=?\n");
    scanf("%d",&ans);
    if(ans==24) printf("Right");
    else
    {
        printf("Wrong. Correct answer is %d.",10+14);
    }
}
