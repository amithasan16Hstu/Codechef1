#include<stdio.h>
int main()
{
    int i,t,x;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&x);
        if(x>65)
        {
            printf("Overload\n");
        }
        else if(x<35)
        {
            printf("Underload\n");
        }
        else{
            printf("Normal\n");
        }
    }
}