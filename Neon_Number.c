#include<stdio.h>
int main()
{
    int a,s,sum=0,t,r;
    scanf("%d",&a);
    s=a*a;
    t=s;
    while(t!=0)
    {
        r=t%10;
        sum=sum+r;
        t/=10;
    }
    if(sum==a)
    {
        printf("Neon Number");
    }
    else{
        printf("Not Neon Number");
    }
        
}