#include <stdio.h>

int main(void) {
	int t,a,b,k;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    scanf("%d %d",&a,&b);
	    k=a+b;
        if(k<3)
        printf("1\n");
        if(k>=3&&k<=10)
        printf("2\n");
        if(k>=11&&k<=60)
        printf("3\n");
        if(k>60)
        printf("4\n");
	}

	return 0;
}

