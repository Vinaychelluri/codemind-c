#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=n;i++)
        {
            printf("%c ",64+i);
        }
         printf("
");
    }
   
}