#include <stdio.h>

int main(){

    int input;
   
	scanf("%d",&input);
    for(int i=1;i<=input;i++){
        if(input%i==0){
            if(i==1) printf("%d",i);
            else printf(" %d",i);
        }
    }
    printf("\n");

    return 0;
}