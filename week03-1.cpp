#include <stdio.h>

int main ()
{
    int a,b;
    printf("請輸入兩個數字:");
    scanf("%d%d",&a,&b);
    printf("%d 加 %d 得到 %d\n",a,b,a+b);
    printf("%d 減 %d 得到 %d\n",a,b,a-b);
    printf("%d 乘 %d 得到 %d\n",a,b,a*b);
    printf("%d 除 %d 得到 %d\n",a,b,a/b);
    printf("%d 除 %d 的餘數 %d\n",a,b,a%b);

}


