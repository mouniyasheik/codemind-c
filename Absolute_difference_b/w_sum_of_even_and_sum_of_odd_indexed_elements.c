#include<stdio.h>
int main()
{
    int n,i,s=0,d=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   for (i=0;i<n;i++){
       if (i%2==0){
           s=s+a[i];
       }
   }
        for (i=0;i<n;i++){
       if (i%2!=0){
           d=d+a[i];
       }
        }
       printf("%d",s-d);
   }