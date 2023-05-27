#include<stdio.h>
void func1(void);
void func2(void);
int main()
{
    func1();
    return 0;
}
void func1(void)
{
    printf("The summer soldier, ");
    func2();
}
void func2(void)
{
    printf("the sunshine patriot.");
}
