#include <stdio.h>

int main()
{
    int a,b,c;
    printf("請輸入 2 個數字: ");
    scanf("%d%d",&a,&b);

    while(1)
    {
        c = a%b;
        printf("a: %d b: %d c: %d\n",a,b,c);
        if(c == 0) break;
        a=b;
        b=c;
    }
    printf("中的是: %d",b);
}
