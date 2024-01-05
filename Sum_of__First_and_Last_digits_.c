#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    c=a%10;
    b=a;
    while(b>=10)
    b/=10;
    d=b+c;
    printf("%d",d);
}