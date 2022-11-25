#include <stdio.h>

int main()
{
    int a;
    int b=10;
    int c[3];
    int d[3]={10,20,30};
    int g[2][3];
    int h[2][3]={{10,20,30},{40,50,60}};

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",h[i][j]);
        }
        printf("\n");
    }
}
