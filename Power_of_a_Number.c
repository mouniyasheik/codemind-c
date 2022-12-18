#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,f,k;
    scanf("%d%d%d",&x,&y,&m);
    f=pow(x,y);
    k=f%m;
    printf("%d",k);
}