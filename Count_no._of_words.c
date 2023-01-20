#include<stdio.h>
int main()
{
    char str[10000];
    scanf("%[^
]s",str);
    int c=1,i;
    for(i=0;str[i];i++)
    {
        if(str[i]==' ')
        {
            c++;
        }
    }
    printf("%d",c);
}