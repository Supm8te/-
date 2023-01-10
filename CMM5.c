#include <stdio.h>
#include <math.h>

int main(){

    double a,ans;
    
    scanf("%lf",&a);
    a *= a;
    a=(int)(a*10+0.5); //利用強制型別轉換運算將數字第1位以後的小數部分捨去
    ans=a/10; //再將得到的數除以10還原

    printf("%.1f\n",ans);

    return 0;
}