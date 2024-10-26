#include<stdio.h>
int main()
{
    int i,x,y,p,q,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d %d",&x,&y,&p,&q);
        if((x+p*10)<(y+q*10))
        {
            printf("Chef\n");
        }
        else if((x+p*10)>(y+q*10))
        {
            printf("Chefina\n");
        }
        else if((x+p*10)==(y+q*10))
        {
            printf("Draw\n");
        }
    }
}