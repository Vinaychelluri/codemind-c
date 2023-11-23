#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("H:M:S-%d:%d:%d",a/3600,(a%3600)/60,(a%3600)%60);
}


