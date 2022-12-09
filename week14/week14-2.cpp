#include <stdio.h>

int a=10;

void func()
{
    int a=20;
    printf("func()裡的 a 是 : %d\n",a);
    a=30;
    printf("func()中 a 改成 : %d\n",a);
}
int main()
{
    printf("func()中 a 是 : %d\n",a);
    func();
    printf("func()中 a 是 : %d\n",a);
}
