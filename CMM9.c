#include <stdio.h>

int main(){

    int input;
    int ans=1;
   
	scanf("%d",&input);

	if(input>31){
        printf("Value of more than 31\n");
    }
    else{
        ans=ans << input;
        printf("%d\n", ans);
    }

    return 0;
}