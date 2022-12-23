#include<stdio.h>
int hn(int n)
{
    int r,s=0;
    while(n>0)
    {
        r=n%10;
        s=s+(r*r);
        n=n/10;
    }
    return s;
}
int main()
{
    int n,re;
    scanf("%d",&n);
    re=n;
    while(re!=1&&re!=4)
    {
        re=hn(re);
    }
    if(re==1)
    printf("True");
    else
    printf("False");
}