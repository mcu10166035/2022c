#include <stdio.h>

int a=10;

void func()
{
    a=30;
    printf("func()中 a 改成 : %d\n",a);
}
int main()
{
    printf("func()中 a 是 : %d\n",a);
    func();
    printf("func()中 a 是 : %d\n",a);
}
