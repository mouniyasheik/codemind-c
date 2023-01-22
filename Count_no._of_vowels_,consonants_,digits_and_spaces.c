#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int i,vc=0,c=0,di=0,w=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
   {
       vc++;
   }
   else if(str[i]=='0' || str[i]=='1'|| str[i]=='2'||
        str[i]=='3'|| str[i]=='4'|| str[i]=='5'||
        str[i]=='6'|| str[i]=='7'|| str[i]=='8'|| str[i]=='9')
   {
       di++;
   }
   else if(str[i]==' '&&str[i+1]!=' ')
   {
       w++;
   }
   else
   {
       c++;
   }
    }
    printf("Vowels: %d
Consonants: %d
Digits: %d
White spaces: %d
",vc,c,di,w);
}