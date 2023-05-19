#include<stdio.h>
int main()
{
    int n,r,sum=0,p=1,t;
    scanf("%d",&n);
    t=n;
    while(t>0)
    {
        r=t%10;
        sum+=r;
        p*=r;
        t/=10;
    }
    if(sum==p)
    {
        printf("Spy Number");
    }
    else{
        printf("Not Spy Number");
    }
}