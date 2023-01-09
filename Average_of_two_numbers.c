#include<stdio.h>
void avg(int a,int b)
{
    float c;
    c=(a+b)*0.5;
    printf("Average of %d and %d is: %.2f",a,b,c);
}
int main()
{
   int a,b;
    scanf("%d%d",&a,&b);
    avg(a,b);
}