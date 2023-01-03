#include<stdio.h>
#include<math.h>
int main()
{
    int i,a,b;
    float k=0,s;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        s=sqrt(i);
        k=k+s;
    }
    printf("%.2f",k);
}