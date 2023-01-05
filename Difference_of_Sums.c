#include<stdio.h>
int main()
{
    int n,sq=0,s=0,st,q,i,p;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        q=i*i;//4
        s=s+q;//55
        sq=sq+i;//15
        st=sq*sq;//225
        p=st-s;
    }
    printf("%d",p);
}