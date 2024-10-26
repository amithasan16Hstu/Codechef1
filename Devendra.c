#include<stdio.h>
int main()
{
    int i,t,x,y,a,b,c;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d %d %d",&x,&y,&a,&b,&c);
        if(x-y>a+b+c)
        {
            printf("YES\n");
        }
        else if(x-y<a+b+c)
        {
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }

    }
}