#include <stdio.h>

int main(){

    int num1,num2;
    int sum,product,diff;

    scanf("%d %d",&num1,&num2);
    sum = num1+num2;
    product = num1*num2;
    diff = num1-num2;

    printf("%d+%d=%d\n",num1,num2,sum);
    printf("%d*%d=%d\n",num1,num2,product);
    printf("%d-%d=%d\n",num1,num2,diff);
    if(num1%num2>=0){
        printf("%d/%d=%d...%d\n",num1,num2,num1/num2,num1%num2);
    } 
    else printf("%d/%d=%d...%d\n",num1,num2,num1/num2-1,num1%num2+num2);

    return 0;
}