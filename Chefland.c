#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t>0){
	    int x1,x2,y1,y2,z1,z2;
	    scanf("%d %d %d %d %d %d",&x1,&x2,&y1,&y2,&z1,&z2);
	    if((x1<=x2)&&(y1<=y2)&&(z1>=z2)){
	        printf("YES\n");
	}
	else {
	    printf("NO\n");}
	t--;}
	return 0;
}