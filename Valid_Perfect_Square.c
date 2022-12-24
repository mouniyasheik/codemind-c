#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        int n,i,c=0;
        scanf("%d",&n);
        for(i=1;i<n;i++)
        {
            if(n==i*i)
            {
             c+=1;
             printf("True");
             break;
            }
        }
        if(c==0)
        printf("False");
        printf("
");
    }
}