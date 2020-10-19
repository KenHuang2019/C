// 10. break 敘述介紹
// 延伸9.範例，讓迴圈在第二次執行時透過break中斷迴圈

#include <stdio.h>

int main(){
    int sum=0;
    for (int n = 1; n <= 10; n++)
    {
        printf("loop: %d\n", n); 
        sum += n;
        printf("sum: %d\n", sum);
        // 設定中斷條件
        if (n == 2)
            break;
    }
}