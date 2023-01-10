#include<stdio.h>

int main(){
	int startH, startM, endH, endM;
	scanf("%d%d%d%d", &startH, &startM, &endH, &endM);
	startM += startH*60;
	endM += endH*60;

	if(startM > endM){
		endM += 24*60;
	}
    
	int total = endM-startM;

    if(total<=120) printf("%d\n",total/30*30);
    else if(total>120&&total<240) printf("%d\n",120+((total-120)/30*40));
    else printf("%d\n",280+((total-240)/30*60));

    return 0;
}