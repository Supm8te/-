#include <stdio.h>

int main(){

    int N;
	scanf("%d",&N);
    
    for(int i=1; i<=N; i++){
        if(i%35==0){
            if(i==35) printf("%d",i);
            else printf(" %d",i);
        }
    }
    printf("\n");

    return 0;
}