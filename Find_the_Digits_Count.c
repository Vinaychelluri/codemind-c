#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d%d",&a,&b);
    while(a>0)
    {
        b=a%10;
        c++;
        a=a/10;
    }
    printf("%d",c);
}