

#include <stdio.h>

int main() {
    int t,n,x,k,d;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d",&n,&x,&k);
        if((k/x)==0){
            
            printf("0\n");
        }
        else {
            if(k/x>n){
            printf("%d\n",n);}
            else{
            printf("%d\n",k/x);
        }
        }
        
        
    }
    
    return 0;
}