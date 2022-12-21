#include<stdio.h>
int main()
{
    int n,r,s=0,p=1,q;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        s=s+r;
        p=p*r;
        q=q/10;
    }
   int m=p-s;
    printf("%d",m);
}