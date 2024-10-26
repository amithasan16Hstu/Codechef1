#include<stdio.h>
int main()
{
    int t,n,m,k,i,sub=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&n,&m,&k);
        sub=m-k;
        if(sub>=n)
        {
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
}