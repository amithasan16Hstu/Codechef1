#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,t,x,y,d,sub=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&x,&y,&d);
        sub=abs(x-y);
        if(sub<=d)
        {
            printf("YES\n");
        }
        else printf("NO\n");
    }
}