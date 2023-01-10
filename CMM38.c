#include <stdio.h>

int main(){

    int a,b,c;
   
	scanf("%d %d %d",&a,&b,&c);
        
    if((c+b>a) && (a+c>b) && (a+b>c)) printf("fit\n");
    else printf("unfit\n");

    return 0;
}