#include <stdio.h>

int main(){

    int input;
    int one,two,three;

	scanf("%d",&input);

    one = input/100;
    two = (input%100)/10;
    three = input%10;
    
    if(input == (one*one*one+two*two*two+three*three*three)) printf("Yes\n");
    else printf("No\n");
        
    return 0;
}