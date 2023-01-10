#include <stdio.h>

int main(){
    //long long is right
    long long num;
    long long ans=1;
   
	scanf("%lld",&num);
    
    for(int i=1;i<=num;i++){ 
        ans = ans * i;
    }
		
    printf("%lld\n",ans);

    return 0;
}