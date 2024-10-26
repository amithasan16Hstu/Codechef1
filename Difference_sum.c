#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n1,n2;
    scanf("%d %d",&n1,&n2);
    if(n1>n2){
int sub=abs(n1-n2);
printf("%d\n",sub);
    }
    else{
        int sum=n1+n2;
        printf("%d\n",sum);
    }
}