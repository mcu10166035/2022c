#include <stdio.h>

int main()
{
	int n,c;
	scanf("%d",&n);
	int max=0,min=100;
	int a[100];

	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	for (int i = 0;i<n;i++){
		for (int j=0;j<n;j++){
			if (a[i]<a[j]&&a[i]<min){
				min = a[i];
				c = i;
			}
		}
	}
	for (int i = c;i<n;i++){
		for (int j=c;j<n;j++){
			if (a[i]>a[j]&&a[i]>max){
				max = a[i];
			}
		}
	}
	int b = max-min;
	printf("請按任意鍵繼續 . . . \n");
	printf("最大利潤=%d-%d=%d\n",max,min,b);
}
