//prime numbers //ok
#include<stdio.h>

int is_prime(int input){
	int i;
	if(input==1) return 0;
	else{
		for(i=2;i<input;i++){
			if(input%i==0) return 0;
		}
	}
	return 1;
}

int main(){

	int input;
	scanf("%d",&input);

	if(is_prime(input) == 1) printf("YES\n");
	else printf("NO\n");

	return 0;
}