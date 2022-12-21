#include<stdio.h>
int main()
{
    int n,i,q,r,s=0;
    scanf("%d",&n);
    i=n*n;
    q=i;
    while(q!=0)
    {
      
       r=q%10;
       s=s+r;
       q=q/10;
    }
    if(n==s)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}