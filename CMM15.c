//ok
#include <stdio.h>

int main(){

    double num1,num2;
   
	scanf("%lf %lf",&num1,&num2);
		
    if(num1>=0 && num1<=100 && num2>=0 && num2<=100)printf("inside\n");
    else printf("outside\n");

    return 0;
}