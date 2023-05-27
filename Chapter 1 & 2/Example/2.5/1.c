#include<stdio.h>
int main()
{
    int number,answer;

    for(number=1;number<11;number++)
    {
        printf("%d + %d = ?\n",number,number);
        scanf("%d",&answer);
        if(answer==number+number) printf("Right.\n");
        else printf("Wrong. Correct answer is %d.\n",number+number);
    }
    return 0;
}

