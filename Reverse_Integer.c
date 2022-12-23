#include<stdio.h>
int main()
{
    int n,i,q,s=0;
    scanf("%d",&n);
    q=n;
    while(q)
    {
        s=s*10+q%10;
        q=q/10;
    }
    printf("%d",s);
}