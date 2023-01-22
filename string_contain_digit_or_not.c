#include<stdio.h>  
int main()
{
    
    char s[100];
    int j,su=0;
    scanf("%[^
]s",s);
    //sa=does not contain digit
    
    //Iterating each character through for loop.
    for (j= 0; s[j] != NULL; j++)
    {
        if(s[j]=='0' || s[j]=='1'|| s[j]=='2'||
        s[j]=='3'|| s[j]=='4'|| s[j]=='5'||
        s[j]=='6'|| s[j]=='7'|| s[j]=='8'|| s[j]=='9')
        
        {su++;
    }
    }
    if(su>0)
    {
    printf("Contains %d digit",su);
    }
    else
    printf("Doesn't contain digit");
    return 0; 
}
