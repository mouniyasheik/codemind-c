#include<stdio.h>
int main()
{
    int l,n,i=0;
    int w,h;
    scanf("%d%d",&l,&n);
    for(i=0;i<n;i++)
    {
    scanf("%d%d",&w,&h);
    if(w<l||h<l)
    printf("UPLOAD ANOTHER
");
    else if(w==h)
        printf("ACCEPTED
");
    else if(w>l||h>l)
        printf("CROP IT
");
    }
}