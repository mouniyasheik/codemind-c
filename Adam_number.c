#include<stdio.h>
int main()
{
    int n,q,i,sq,s=0,sw=0,t,r;
    scanf("%d",&n);
    i=n*n;
    q=n;
    while(q!=0)
    {
        r=q%10;
        s=s*10+r;
        q=q/10;
    }
    sq=s*s;
    t=sq;
    while(t!=0)
    {
        sw=sw*10+(t%10);
        t=t/10;
    }
    if(sw==i)
    printf("True");
    else
    printf("False");
}