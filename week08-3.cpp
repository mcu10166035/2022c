#include <stdio.h>

int main()
{
    printf("璶耞块计琌ぃ琌﹖縒借计: ");
    int n;
    scanf("%d",&n);
    int bad = 0;
    for (int i =2;i<n;i++)
    {
        if(n%i==0) bad=1;
    }
    if (bad==0) printf("%d 琌借计",n);
    else printf("%d ぃ琌借计",n);
}
