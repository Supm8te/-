//same
#include <stdio.h>

int main(){

    double a,b;
    scanf("%lf %lf",&a,&b); 
		
	double c=(a*a)+(b*b); 
	if(c<10000){
		printf("inside\n");
	}
	else{
		printf("outside\n");
	}

    return 0;
}