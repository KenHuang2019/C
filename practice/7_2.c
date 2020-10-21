// 7. while 迴圈練習
/* 題目：寫一隻程式讓使用者可以輸入一整班的成績(數值是整數且介於0~100之間)
* 計算有多少人及格(>=60分)和多少人不及格(<60分)
* 讓使用者輸入-1時可終止程式
*/

#include <stdio.h>

int main() {
    int g=0, bt60=0, lt60=0;
    printf("Please enter grade: (If you are done, please enter -1.)\n");
    while( g != -1) {
        scanf("%d", &g);
        if( g >= 60 ) {
            bt60++;
        }
        else {
            lt60++;
        }
        printf("Please enter the next grade:\n");
    }
    printf("Success: %d, Fail: %d\n", bt60, lt60 - 1); // 這邊減1是因為最後終止程式時的 -1 也會被記錄成不及格，要再扣除
}