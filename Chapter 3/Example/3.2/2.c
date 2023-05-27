#include<stdio.h>
int main()
{
    int i,ans;

    for(i=1;i<11;i++){
        printf("%d + %d = ?",i,i);
        scanf("%d",&ans);
        if(ans==i+i) printf("Right\n");
        else{
            printf("Wrong. Try again.\n");
             printf("%d + %d = ?",i,i);
        scanf("%d",&ans);
        if(ans==i+i) printf("Right\n");
        else printf("Wrong. Correct answer = %d\n",i+i);
    }
}
return 0;
}
