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
       if (a[i]%2==0){
           s=s+a[i];
       }
   }
        for (i=0;i<n;i++){
       if (a[i]%2!=0){
           d=d+a[i];
       }
        }
        int k=s-d;
       if(k>0)printf("%d",k);
       else printf("%d",-k);
   }