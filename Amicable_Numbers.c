#include<stdio.h>
int main()
{
    int a,b,i,sum=0,su=0,j;
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            sum+=i;
        }
    }
    for(j=1;j<b;j++)
    {
        if(b%j==0)
        {
            su=su+j;
        }
    }
    if((sum==b)&&(su==a))
    {
        printf("Amicable");
    }
    else{
        printf("Not Amicable");
    }
    
}