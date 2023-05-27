#include<stdio.h>
int  xor (int a, int b);
int main( ){
    int i,j;
    printf("Enter i(0 or 1): ");
    scanf("%d", &i);
    printf("Enter j(0 or 1): ");
    scanf("%d", &j);

    printf("i AND j: %d\n",i&&j);
    printf("i OR j: %d\n", i||j);
    printf("i XOR j: %d\n", xor(i,j));

    return 0;
}
int xor(int a, int b){
    return(a||b) && !(a&&b);
}
