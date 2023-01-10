#include <stdio.h>

int main(){

    int input;
   
	scanf("%d",&input);
        
    if(input%4==0){
        if(input%400==0) printf("Bissextile Year\n");
        else printf("Common Year\n"); 
    }
    else printf("Common Year\n");

    return 0;
}