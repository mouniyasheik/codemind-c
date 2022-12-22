#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,r,s=0,q;
    scanf("%d",&q);
    n=q;
    while(n!=0)
    {
        d=log10(n)+1;
        r=n%10;
        s=s+pow(r,d);
        n=n/10;
    }
    if(q==s)
    printf("True");
    else
    printf("False");
}