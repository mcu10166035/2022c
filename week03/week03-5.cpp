#include <stdio.h>

int main ()
{
    for (int n =1; n < 1000; n++)
    {
        if ( n%8==6 && n%9==7 && n%15==13 )
        {
            printf("瞷计琌 %d\n",n);
            printf("ノ 8 埃緇计 %d\n",n%8);
            printf("ノ 9 埃緇计 %d\n",n%9);
            printf("ノ 15 埃緇计 %d\n\n",n%15);
        }
    }
}


