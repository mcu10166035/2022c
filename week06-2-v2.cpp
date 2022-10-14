#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    for(int i =1;i<=x;i++)
    {
        int star = i*2-1;
        int space = x-i;
        for (int k =0;k<space;k++)
        {
            printf(" ");
        }
        for (int k =0;k<star;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}


