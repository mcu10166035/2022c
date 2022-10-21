#include <stdio.h>

int main()
{
    long long int a,b,c;
    printf("請輸入 2 個數字: ");
    scanf("%lld%lld",&a,&b);

    while(1)
    {
        c = a%b;
        printf("a: %lld b: %lld c: %lld\n",a,b,c);
        if(c == 0) break;
        a=b;
        b=c;
    }
    printf("答案是: %lld\n",b);
}
