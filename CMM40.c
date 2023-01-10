#include <stdio.h>

int main(){

    int input,what=0;
   
	scanf("%d",&input);
        
    for(int i=1; i<=input; i++){
        if(i==1) printf("%d ",i);
        else printf("+ %d ",i);
        what+=i;
    }
    printf("= %d\n",what); 
    
    return 0;
}