#include<stdio.h>
int main()
{
    int i,t,a,b;
   
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            printf("%d\n",a);
        }
        else{
            printf("%d\n",b);
        }
    }
}