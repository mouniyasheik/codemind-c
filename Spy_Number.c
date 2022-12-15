#include<stdio.h>
int main()
{
    int n,r,s=0,d=1;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s=s+r;
        d=d*r;
        n=n/10;
    }
    if(d==s)
    {
    printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}