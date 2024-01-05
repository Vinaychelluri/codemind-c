#include<stdio.h>
int main()
{
    int a,r,c;
    scanf("%d",&a);
    for(r=1;r<=a;r++)
    {
        for(c=1;c<=r;c++)
        {
        printf("*");
    }
    printf("
");
  }
}