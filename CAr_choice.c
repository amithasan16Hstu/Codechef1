#include<stdio.h>
int main()
{
    int i,t;
    float a,b,c,d;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(c/a>d/b)
        {
            printf("1\n");
        }
        else if(c/a<d/b)
        {
            printf("-1\n");
        }
        else if(c/a==d/b)
        {
            printf("0\n");
        }
        
        
    }
}
