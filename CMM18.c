//10 to binary //ok
#include <stdio.h>

int main(){

    int number=0;
    int binary[8];
    scanf("%d",&number);
    if(number<0){
        number+=256;
    }
    for(int i=7;i>= 0;i--)  
    {  
        binary[i]=number%2;  
        number/=2;  
    }  
    for (int i = 0; i < 8; i++)  
    {  
        printf("%d",binary[i]);
    }  
    printf("\n");

    return 0;
}