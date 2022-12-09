#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c;

    while(1){
        c =a%b;
        if (c==0) break;
        a=b;
        b=c;
    }

    int ans = b;
    printf("%d",ans);
}
