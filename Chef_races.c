#include <stdio.h>

int main(void) {
	int a,b,x,y,t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    int max=2;
	    scanf("%d%d%d%d",&a,&b,&x,&y);
	    if(a==x || a==y){
	        max--;
	    }
	    if(b==x || b==y){
	        max--;
	    }
	    printf("%d\n",max);
	}
	return 0;
}
