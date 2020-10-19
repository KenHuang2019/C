// 11. continue 敘述介紹
// 延伸9.範例，讓迴圈在第5次執行時透過continue跳過累加計算

#include <stdio.h>

int main(){
    int sum=0;
    for (int n = 1; n <= 10; n++)
    {
        printf("loop: %d\n", n); 
        // 設定略過條件
        if (n == 5)
            continue;
        sum += n;
        printf("sum: %d\n", sum);
    }
}