#include<stdio.h>
void tar(int p1,int p2,int p3,int p4)
{
    if(p1>=10&&p2>=10&&p3>=10&&p4>=10)
    {
        printf("YES");
    }
    else
    printf("NO");
}
int main()
{
    int p1,p2,p3,p4;
    scanf("%d%d%d%d",&p1,&p2,&p3,&p4);
    tar(p1,p2,p3,p4);
}