#include <stdio.h>

int n =30;

int funA(int a,int b)
{
    printf("funA()�� a,b �O : %d %d\n",a,b);
    return a+b;
}

int funB(int n)
{
    printf("funB()�� n �O : %d\n",n);
    int ans=funA(n,n);
    return ans;
}

int main()
{
    int a=10,b=20;
    funB(b);
    funA(a,b);
    printf("main()�� a,b �O : %d %d\n",a,b);
}
