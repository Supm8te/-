#include <stdio.h>

int main(){

    double C,F,ans;
    
    scanf("%lf",&C);
    F = C*9/5+32;
    F=(int)(F*10+0.5); //利用強制型別轉換運算將數字第1位以後的小數部分捨去
    ans=F/10; //再將得到的數除以10還原

    printf("%.1f\n",ans);

    return 0;
}