#include <stdio.h>

int n =30;

int funA(int a,int b)
{
    printf("funA()的 a,b 是 : %d %d\n",a,b);
    return a+b;
}

int funB(int n)
{
    printf("funB()的 n 是 : %d\n",n);
    int ans=funA(n,n);
    return ans;
}

int main()
{
    int a=10,b=20;
    funB(b);
    funA(a,b);
    printf("main()的 a,b 是 : %d %d\n",a,b);
}
