#include<stdio.h>
#include<stdlib.h>
int main()
{
    long int p,c,b,m,co,ma;
    scanf("%ld%ld%ld%ld%ld",&p,&c,&b,&m,&co);
    ma=((p+c+b+m+co)*100/500);
    
        switch(ma)
        {
            
            case 90 ... 100:printf("Grade A");break;
            case 80 ... 89:printf("Grade B");break;
            case 70 ... 79:printf("Grade C");break;
            case 60 ... 69:printf("Grade D");break;
            case 40 ... 59:printf("Grade E");break;
            case 1 ... 39:printf("Grade F");break;
            default:printf("invalid");break;
        }
    
}