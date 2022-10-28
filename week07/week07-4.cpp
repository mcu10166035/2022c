#include <stdio.h>

int main()
{
    printf("請輸入一個數字 : ");
    int n ;
    scanf("%d",&n);

    while(n>0)
    {
        printf("%d\n",n%10);
        n = n/10;
    }
}
