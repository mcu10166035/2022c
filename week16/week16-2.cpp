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
