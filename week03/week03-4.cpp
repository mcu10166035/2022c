#include <stdio.h>

int main ()
{
    int n;
    printf("請輸入一個數字: ");
    scanf("%d",&n);
    printf("用 8 除餘數 %d\n",n%8);
    printf("用 9 除餘數 %d\n",n%9);
    printf("用 15 除餘數 %d\n",n%15);
}

