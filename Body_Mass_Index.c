#include <stdio.h>
#include<math.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	int a,b,x;
	for(int i=0;i<n;i++){
	    scanf("%d%d",&a,&b);
	    x=a/(b*b);
	    if(x<=18){
	    printf("1\n");
	    }
	    else if(x>18 && x<25){
	    printf("2\n");
	    }
	    else if(x>24 && x<30){
	    printf("3\n");
	    }
	    else if(x>=30)
	    printf("4\n");
	}
	
	return 0;
}
