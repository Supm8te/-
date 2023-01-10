#include <stdio.h>

int main(){

    int second;
    scanf("%d",&second);

    //一天86400秒
    //一小時3600秒
    //一分鐘60秒

    printf("%d days\n",second/86400);
    printf("%d hours\n",second%86400/3600);
    printf("%d minutes\n",second%3600/60);
    printf("%d seconds\n",second%60);

    return 0;
}