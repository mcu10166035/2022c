#include <stdio.h>

int main()
{
    printf("�п�J�@�ӼƦr : ");
    int n ;
    scanf("%d",&n);

    while(n>0)
    {
        printf("%d\n",n%10);
        n = n/10;
    }
}
