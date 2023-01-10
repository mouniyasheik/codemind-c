#include<stdio.h>
void p(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf("%d",j+1);
        }
        printf("
");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    p(n);
}