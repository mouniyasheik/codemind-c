#include<stdio.h>
void fact(int x,int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
    {
    f=f*i;
    }
    printf("%d
",f);
}
int main()
{
    int x,i,q;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        int n;
        scanf("%d",&n);
      fact(x,n);
        
    }
}