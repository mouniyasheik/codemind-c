#include<stdio.h>
int main()
{
    int n,i,j,p=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    for(j=0;j<=n;j++)
        if(j*j==a[i])
        p+=a[i];
    }
    printf("%d",p);
}