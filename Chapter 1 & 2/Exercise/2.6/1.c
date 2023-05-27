#include<stdio.h>
main()
{
    int i;
    printf("Number || Square ||      Cube\n");
    printf("------------------------------\n");
    for(i=1; i<11; i++)
        printf("%2d           %3d         %4d\n",i,i*i,i*i*i);

    return 0;
}

