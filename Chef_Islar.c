#include<stdio.h>
int main()
{
    int i,t;
    float a,b,c,d,e;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
        if((a/c-b/d)>e)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}