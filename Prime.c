#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            c=1;
            break;
        }
    }
    if(c==1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n,x,i;
    scanf("%d",&n);
    x=prime(n);
    if(x==1)
    printf("Prime");
    else
    printf("Not Prime");
}