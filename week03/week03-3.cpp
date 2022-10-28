#include <stdio.h>

int main ()
{
    int n;
    printf("請輸入一個數字: ");
    scanf("%d",&n);
    if (n%2 == 0) printf("even\n");
    else printf("odd\n");
}
