#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&i);
         if(i<=15)
              printf("Yes\n");
        else
            printf("No\n");
    }
}