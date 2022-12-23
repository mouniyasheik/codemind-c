#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
{
    int n,i,q,r,s=0;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
       r=q%10;
       s=s*10+r;
       q=q/10;
    }
    if(s==n)
    {
    printf("True
");
    }
    else
    {
    printf("False
");
    }

}
}