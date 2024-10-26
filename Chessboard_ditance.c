#include<stdio.h>
#include <stdlib.h>
int main()
{
    int t,i,x1,x2,y1,y2;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
        int sub1=abs(x1-y1);
        int sub2=abs(x2-y2);
        if(sub1>sub2)
        {
            printf("%d\n",sub1);
        }
        else{
            printf("%d\n",sub2);
        }
    }
}