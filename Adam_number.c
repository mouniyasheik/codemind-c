#include<stdio.h>
int main()
{
    int n,i,q,a,s=0,sq,st=0;
    scanf("%d",&n);
    i=n*n;//144
    a=n;
    while(a>0)
    {
        s=s*10+a%10;//21
        a/=10;
    }
    sq=s*s;//441
    q=sq;
    while(q>0)
    {
        st=st*10+q%10;//144
        q/=10;
    }
    if(st==i)
    printf("True");
    else
    printf("False");
}