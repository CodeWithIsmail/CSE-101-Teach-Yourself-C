#include<stdio.h>
int main()
{
    int n,i,ans,j;

    for(i=1;i<11;i++){
        printf("%d + %d = ?\n",i,i);
        scanf("%d",&ans);
        if(ans==i+i) printf("Right answer\n");
        else{

                for(j=0;j<3;j++){
                printf("Wrong. Try again.\n");

                     printf("%d + %d = ?\n",i,i);
                     scanf("%d",&ans);
                     if(ans==i+i) {
                        printf("Right answer\n");
                        break;
                     }

                }
                if(ans!=i+i) printf("Wrong. Correct answer is %d\n",i+i);
        }
    }
}
