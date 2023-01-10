#include <stdio.h>

int main(){

    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int diff;
    diff = num1-num2;

    if(diff<0) diff*=-1;

    printf("%d\n",((num1+num2)*(diff+1))/2);
    
    return 0;
}