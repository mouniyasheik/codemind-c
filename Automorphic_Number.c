#include<stdio.h>
#include<math.h>
int main()
{
    int n,q,d,e,s,r;
    scanf("%d",&n);
        s=n*n;
        d=log10(n)+1;
        e=pow(10,d);
        r=s%e;
    if(r==n)
    printf("Automorphic Number");
    else
    printf("Not an Automorphic Number");
}