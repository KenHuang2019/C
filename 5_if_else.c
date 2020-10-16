// 5. if 條件敘述介紹
// 以華氏、攝氏溫度轉換公式作為範例

#include <stdio.h>

int main(){
    double c, f; // 宣告存放溫度資訊的變數

    printf("Please enter a number of ℃:\n"); // 給使用者提示，輸入攝氏溫度
    scanf("%lf", &c); // 接收使用者輸入的值

    f = ((c * 9.0) / 5.0) + 32.0; // 公式為F = 9/5 * C + 32，注意除法會產生小數，變數型別要用浮點數，才不會產生誤差
    printf("°F = %lf\n", f);

    // 根據不同溫度有不同反饋
    if ( f >= 90 ) {
        if ( f > 95 )
            printf("super hot\n"); // 華氏溫度大於95度時，輸出 super hot
        else
            printf("a little hot\n"); // 華氏溫度介於90~95度時，輸出 a littlehot
    } else if ( f >= 80) {
        printf("warm\n"); // 華氏溫度介於80~90度時，輸出 warm
    } else {
        printf("cold\n"); // 華氏溫度低於80度時，輸出 cold
    }
}