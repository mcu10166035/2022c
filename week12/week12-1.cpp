#include <stdio.h>

int a[5]={7,52,43,99,1};

int main()
{
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if (a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
}
