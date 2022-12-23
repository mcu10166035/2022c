# 2022c
資傳一甲的程式設計的程式倉庫

# Week06

## (1) 考試 : 九九乘法表
考前複習、考後檢討
```cpp

#include <stdio.h>

int main()
{
	for (int i = 1; i < 10;i++)
	{
		for (int j = 1 ; j < 10; j++)
		{
			printf("%d*%d=%2d ",j,i,i*j);
		}
		printf("\n");
	}
}

```
## (2) 主題 : 畫星星(2層迴圈)
技巧 : 建立鷹架排版
```cpp
#include <stdio.h>

int main()
{
    for(int i =1;i<=5;i++)
    {
        int star = i*2-1;
        int space = 5-i;
        for (int k =0;k<space;k++)
        {
            printf(" ");
        }
        for (int k =0;k<star;k++)
        {
            printf("*");
        }
        printf(" 鷹架:%d樓 %d空格 %d星\n",i,space,star);
    }
}

```
## (3) 主題 : 最大公因數-暴力法
利用電腦一個一個試
```cpp
#include <stdio.h>

int main()
{
    printf("請輸入兩個數字: ");
    int a,b,ans;
    scanf("%d%d",&a,&b);
    for (int i =1;i<=a;i++)
    {
        if(a%i==0 && b%i==0) ans=i;
    }
    printf("找到 ans : %d ",ans);
}

```
## (4) 主題 : 輾轉相除法
利用輾轉相除法的概念設計程式
```cpp
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("請輸入 2 個數字: ");
    scanf("%d%d",&a,&b);

    while(1)
    {
        c = a%b;
        printf("a: %d b: %d c: %d\n",a,b,c);
        if(c == 0) break;
        a=b;
        b=c;
    }
    printf("中的是: %d",b);
}

```

# Week07

## (1) 考試 : 畫星星(金字塔)
考前複習、考後檢討
```cpp

#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	for (int i = 1; i <= n;i++)
	{
		int space = n-i,star=2n-1;
		for (int j = 0 ; j < space; j++) printf(" ");
		for (int j = 0 ; j < star; j++) printf("*");
		printf("\n");
	}
}

```
## (2) 主題 : long long int 各種類別
技巧 : long long int
```cpp
#include <stdio.h>

int main()
{
    int n = 1234567812345678;
    printf("%d\n",n);

    long long int a = 1234567812345678;
    printf("%lld\n",a); /// 小寫 LLD
}
```
## (3) 主題 : 最大公因數
技巧 : long long int 暴力拆解法
```cpp
#include <stdio.h>

int main()
{
    printf("請輸入兩個數字: ");
    long long int a,b,ans;
    scanf("%lld %lld",&a,&b);
    for (long long int i =1;i<=a;i++)
    {
        if(a%i==0 && b%i==0) ans=i;
    }
    printf("答案是 : %lld ",ans);
}
```
## (4) 主題 : 最大公因數
技巧 : long long int 輾轉相除法
```cpp
#include <stdio.h>

int main()
{
    long long int a,b,c;
    printf("請輸入 2 個數字: ");
    scanf("%lld%lld",&a,&b);

    while(1)
    {
        c = a%b;
        printf("a: %lld b: %lld c: %lld\n",a,b,c);
        if(c == 0) break;
        a=b;
        b=c;
    }
    printf("答案是: %lld\n",b);
}
```
## (5) 主題 : 剝皮法(10進位)
技巧 : 剝皮法
```cpp
#include <stdio.h>

int main()
{
    printf("請輸入一個數字 : ");
    int n ;
    scanf("%d",&n);

    while(n>0)
    {
        printf("%d\n",n%10);
        n = n/10;
    }
}
```
# Week08

## (1) 考試 : 最大公因數-輾轉相除法
考前複習、考後檢討
```cpp
#include <stdio.h>

int main()
{
    int a,b,c ;
    scanf("%d%d",&a,&b);

    while(1)
    {
        c =a%b;
	if (c==0) break;
	a=b;
	b=c;
    }
    printf("%d",b);
}

```

## (2) 主題 : for迴圈金字塔
技巧 : 2個 for
```cpp
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for (int i =1;i<=n;i++)
    {
        for (int k =1;k<=n;k++)
        {
            if (k<= n-i)
            {
                printf(" ");
            }
            else printf("*");
        }
        printf("\n");
    }
}
```

## (3) 主題 : while 迴圈金字塔
技巧 : 2個 while
```cpp
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int i = 0;
    while(i<n)
    {
        int k = 0;
        while(k<n)
        {
            if (k<n-i-1) printf(" ");
            else printf("*");
            k++;
        }
        printf("\n");
        i++;
    }
}

```
## (4) 主題 : 質數判斷
技巧 : 
```cpp
#include <stdio.h>

int main()
{
    printf("要判斷你輸入的數字是不是孤獨的質數: ");
    int n;
    scanf("%d",&n);
    int bad = 0;
    for (int i =2;i<n;i++)
    {
        if(n%i==0) bad=1;
    }
    if (bad==0) printf("%d 是質數",n);
    else printf("%d 不是質數",n);
}

```
## (5) 主題 : 列出質數
技巧 : 
```cpp
#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);

    for (int n=2;n<=a;n++)
    {
        int bad = 0;
        for (int i =2;i<n;i++)
        {
            if(n%i==0) bad=1;
        }
        if (bad==0) printf("%d ",n);
    }
}

```
# Week10

## (1) 考試 : 列出質數
考前複習、考後檢討
```cpp
#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);

    for (int n=2;n<=a;n++)
    {
        int bad = 0;
        for (int i =2;i<n;i++)
        {
            if(n%i==0) bad=1;
        }
        if (bad==0) printf("%d ",n);
    }
}


```
## (2) 主題 : 陣列
技巧 : 
```cpp
#include <stdio.h>

int main()
{
    int a[4] = {10,20,30,40};

    printf("a[0]:%d\n",a[0]);
    printf("a[1]:%d\n",a[1]);
    printf("a[2]:%d\n",a[2]);
    printf("a[3]:%d\n",a[3]);
}

```
## (3) 主題 : 陣列-倒著印
技巧 : 
```cpp
#include <stdio.h>

int main()
{
    int a[4] = {10,20,30,40};
    for(int i=0;i<4;i++)
    {
        printf("a[%d]:%d\n",i,a[i]);
    }
    for(int i=3;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}

```
## (4) 主題 : 輸入 100 個數字，並倒著列出來
技巧 : 
```cpp
#include <stdio.h>

int main()
{
	int a[100];
	for (int i=0;i<100;i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i=99;i>=0;i--)
	{
		printf("%d\n",a[i]);
	} 
}
```

# Week11

## (1) 考試 : 百數反印
考前複習、考後檢討
```cpp
#include <stdio.h>

int main()
{
	int a[100];
	
	for (int i=0;i<100;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for (int i=99;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
}

```
## (2) 主題 : 三數排列
技巧 : 
```cpp
#include <stdio.h>

int main()
{
    int a =90,b=80;

    printf("a:%d b:%d\n",a,b);

    int temp =a;
    a =b ;
    b =temp;

    printf("a:%d b:%d\n",a,b);
}

```
## (3) 主題 : 三數排列2
技巧 : 
```cpp
#include <stdio.h>

int main()
{
    int a =90,b=80,c =70;

    if (a>b)
    {
        int temp =a;
        a =b ;
        b =temp;
    }
    if (b>c)
    {
        int temp =b;
        b =c ;
        c =temp;
    }
    if (a>b)
    {
        int temp =a;
        a =b ;
        b =temp;
    }

    printf("a:%d b:%d c:%d\n",a,b,c);
}

```
## (4) 主題 : 百數排列
技巧 : 
```cpp
#include <stdio.h>

int main()
{
    int a[10]={90,80,70,60,50,40,30,20,10,0};

    for (int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");

    for (int i=0;i<10-1;i++)
    {
        if (a[i]>a[i+1])
        {
            int temp =a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }
    for (int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
}

```
## (5) 主題 : 百數排列2
技巧 : 
```cpp
#include <stdio.h>

int main()
{
    int a[10]={90,80,70,60,50,40,30,20,10,0};
    for (int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");

    for (int i=0;i<10-1;i++)
    {
        if (a[i]>a[i+1])
        {
            int temp =a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }

    for (int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
    for (int i=0;i<10-1;i++)
    {
        if (a[i]>a[i+1])
        {
            int temp =a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }

    for (int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
    for (int i=0;i<10-1;i++)
    {
        if (a[i]>a[i+1])
        {
            int temp =a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }
    for (int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");

    for (int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
    for (int i=0;i<10-1;i++)
    {
        if (a[i]>a[i+1])
        {
            int temp =a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }
    for (int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");

    for (int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
    for (int i=0;i<10-1;i++)
    {
        if (a[i]>a[i+1])
        {
            int temp =a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }
    for (int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");

    for (int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
    for (int i=0;i<10-1;i++)
    {
        if (a[i]>a[i+1])
        {
            int temp =a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }
    for (int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");

    for (int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
    for (int i=0;i<10-1;i++)
    {
        if (a[i]>a[i+1])
        {
            int temp =a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }
    for (int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");

    for (int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
    for (int i=0;i<10-1;i++)
    {
        if (a[i]>a[i+1])
        {
            int temp =a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }
    for (int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");

    for (int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
    for (int i=0;i<10-1;i++)
    {
        if (a[i]>a[i+1])
        {
            int temp =a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }
    for (int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
}

```

## (6) 主題 : 百數排列3
技巧 : 泡泡排序法 Bubble sort
```cpp
#include <stdio.h>

int main()
{
    int a[10]={90,80,70,60,50,40,30,20,10,0};
    for (int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
    for (int k=0;k<10-1;k++)
    {
        for (int i=0;i<10-1;i++)
        {
            if (a[i]>a[i+1])
            {
                int temp =a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }

        for (int i=0;i<10;i++) printf("%d ",a[i]);
        printf("\n");
    }
}
```

# Week12

## (1) 考試 : 百數反印
考前複習、考後檢討
```cpp
#include <stdio.h>

int a[100]

int main()
{   
    for (int i=0;i<10;i++) {
    	scanf("%d",&a[i]);
    }
    for (int k=0;k<100;k++){
        for (int i=0;i<100;i++){
            if (a[i]>a[i+1]){
                int temp =a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
    for (int i=0;i<100;i++){ 
	printf("%d\n",a[i]);
    }
}
```
## (2) 主題 : 排序-選擇排序法
技巧 : 
```cpp
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

```
## (3) 主題 : 2D 陣列
技巧 : 
```cpp
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

```
## (4) 主題 : 矩陣加法
技巧 : 
```cpp
#include <stdio.h>

int main()
{
    int a[10][10],b[10][10],c[10][10];

    int n;

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",a[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",b[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%3d",c[i][j]);
        }
    }
}

```
## (5) 主題 : 矩陣乘法
技巧 : 
```cpp
#include <stdio.h>

int main()
{
	int a[10][10],b[10][10],c[10][10];
	int n;
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			c[i][j]=0;
			for (int k=0;k<n;k++){
				c[i][j]+= a[i][k]*b[k][j];
			}
		}
	}
	for(int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			printf("%3d ",c[i][j]);
		}
		printf("\n");
	}
}
```

# Week13

## (1) 考試 : 矩陣加法
考前複習、考後檢討
```cpp
#include <stdio.h>

int main()
{
    int a[10][10],b[10][10],c[10][10];

    int n,m;

    scanf("%d%d",&n,&m);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",a[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",b[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",c[i][j]);
        }
    }
}

```
## (2) 主題 : 股票最佳買點與賣點-瘋狂程設題目
技巧 : 左手i右手j
```cpp
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[100];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int left,right;
    int ans=-99999;
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (a[j]-a[i]>ans){
                ans=a[j]-a[i];
                left = a[i];
                right=a[j];
            }
        }
    }
    printf("請按任意鍵繼續...\n");
    printf("最大利潤=%d-%d=%d\n",right,left,ans);
}

```
## (3) 主題 : A4白紙/黃金比例/Fibonacci數列
技巧 : 
```cpp
#include <stdio.h>

int main()
{
    int a[50];
    a[0]=0;
    a[1]=1;

    for(int i=2;i<45;i++){
        a[i]=a[i-1]+a[i-2];
    }
    for(int i=0;i<45;i++){
        printf("%d ",a[i]);
    }
}

```
## (4) 主題 : 矩陣轉180 
技巧 : 
```cpp
#include <stdio.h>

int main()
{
    int a[200][200];
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            printf("%2d ",a[i][j]);
        }
        printf("\n");
    }
}

```
## (5) 主題 : Function 函式
技巧 : 
```cpp
#include <stdio.h>

int addnum(int a,int b)
{
    return a+b;
}
int main()
{
    int ans = addnum(2,3);
    printf("addnum(2,3) 會得到 %d\n",ans);
}

```
# Week14

## (1) 考試 : Fibonacci 數列
考前複習、考後檢討
```cpp
#include <stdio.h>

int main()
{
    int a[50];
    a[0]=0;
    a[1]=1;

    for(int i=2;i<45;i++){
        a[i]=a[i-1]+a[i-2];
    }
    for(int i=0;i<45;i++){
        printf("%d ",a[i]);
    }
}
```
## (2) 主題 : 函式
技巧 : 宣告、定義、使用呼叫、參數、return
```cpp
#include <stdio.h>

int a=10;

void func()
{
    a=30;
    printf("func()中 a 改成 : %d\n",a);
}
int main()
{
    printf("func()中 a 是 : %d\n",a);
    func();
    printf("func()中 a 是 : %d\n",a);
}

```
## (3) 主題 : 函式
技巧 : Global、local 參數
```cpp
#include <stdio.h>

int a=10;

void func()
{
    int a=20;
    printf("func()裡的 a 是 : %d\n",a);
    a=30;
    printf("func()中 a 改成 : %d\n",a);
}
int main()
{
    printf("func()中 a 是 : %d\n",a);
    func();
    printf("func()中 a 是 : %d\n",a);
}

```
## (4) 主題 : 函式
技巧 : 
```cpp
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

```
## (5) 主題 : 輾轉相除法
技巧 : 
```cpp
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

```
## (6) 主題 : 函式(輾轉相除法)
技巧 : 函式呼叫函式
```cpp
#include <stdio.h>

int gcd(int a,int b)
{
    if (a==0) return b;
    if (b==0) return a;

    return gcd(b,a%b);
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);

    int ans = gcd(a,b);
    printf("%d",ans);
}

```

# Week15

## (1) 考試 : GCD函式
考前複習、考後檢討
```cpp
#include <stdio.h>

int gcd(int a,int b)
{
    if (a==0) return b;
    if (b==0) return a;

    return gcd(b,a%b);
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);

    int ans = gcd(a,b);
    printf("%d",ans);
}

```
## (2) 主題 : 字串
技巧 : 
```cpp
#include <stdio.h>

int main()
{
    printf("Hello World\n");

    char line[100]="Hello World";

    printf("整數 %d\n",100);
    printf("浮點數 %f\n",3.1415926535);
    printf("%s 字串\n",line);
}

```
## (3) 主題 : ASCII介紹
技巧 : 
```cpp
#include <stdio.h>

int main()
{
    printf("%c : %d\n",65,65);
    printf("%c : %d\n",66,66);
    printf("%c : %d\n",67,67);
    printf("%c : %d\n",'A','A');
    printf("%c : %d\n",'B','B');
    printf("%c : %d\n",'C','C');
    printf("上面用數字 65 及單引號'a' 的結果一致\n");
    printf("%c : %d\n",97,97);
    printf("%c : %d\n",'a','a');
}

```
## (4) 主題 : 特殊字元 && 字串陣列
技巧 : 
```cpp
#include <stdio.h>

int main()
{
    printf("=%c  = %d =\n",65,65);
    printf("=%c  = %d =\n",'+','+');
    printf("=%c  = %d =\n",'\n','\n');
    printf("=%c  = %d =\n",'\t','\t');
    printf("=%c  = %d =\n",'\0','\0');

    char line[] ="Hello World AAA";

    for (int i=0; ;i++){
        char c =line[i];
        if (c==0) break;
        printf("= %c ",c);
    }
}
```
## (5) 主題 : 字串反印
技巧 : 
```cpp
#include <stdio.h>

char line[3000];

int main()
{
    printf("請輸入一串字母，不要有空格: ");
    scanf("%s",line);

    int n=0;
    for (int i=0;line[i]!=0;i++){
        n++;
    }
    for (int i= n-1;i>=0;i--){
        printf("%c",line[i]);
    }
}

```

# Week16

## (1) 考試 : 字串反印
考前複習、考後檢討
```cpp
#include <stdio.h>

char line[3000];

int main()
{
    printf("請輸入一串字母，不要有空格: ");
    scanf("%s",line);

    int n=0;
    for (int i=0;line[i]!=0;i++){
        n++;
    }
    for (int i= n-1;i>=0;i--){
        printf("%c",line[i]);
    }
}
```

## (2) 主題 : scanf()細節
技巧 : 
```cpp
#include <stdio.h>

int main()
{
    char line[300];
    char *p=line;
    int n=10;
    int *p2=&n;
    float f =3.1415926;
    float *p3=&f;
    char c='A';
    char *p4=&c;

}


```
## (3) 主題 : string.h
技巧 : 
```cpp
#include <stdio.h>
#include <string.h>
int main()
{
    char line[300]="Hello";
    int n =strlen(line);

    printf("Hello 字串的長度:%d\n",n);

    char line2[300];
    strcpy(line2,line);
    printf("line2 得到: %s\n",line2);

    printf("比較字串 strcmp(line,line2)得到%d\n",strcmp(line,line2));
}


```
## (4) 主題 : 股票最佳買點與賣點
技巧 : 
```cpp
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


```
## (5) 主題 : 
技巧 : 
```cpp


```
## (6) 主題 : 
技巧 : 
```cpp


```
# Week17

## (1) 考試 : 字串反印
考前複習、考後檢討
```cpp


```
## (2) 主題 : 
技巧 : 
```cpp


```
