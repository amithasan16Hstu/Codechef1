#include<stdio.h>
int main()
{
    int i,t,x,y,sub=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&x,&y);
        if(x<y)
        {
            sub=(y-x);
            printf("%d\n",sub);
        }
        else if(x>y)
        {
            sub=(x-y);
            printf("%d\n",sub);
        }
        else 
        {
            printf("%d\n",0);
        }
    }
}