// 9. for 迴圈練習
/* 題目：按照下列形狀輸出數字
* 0
* 01
* 012
* 0123
* 01234
*/

#include <stdio.h>

int main(){
    for (int i = 0; i < 5; i++) // 外層迴圈控制換行
    {
        for (int j = 0; j <= i; j++) // 內層迴圈控制輸出數字，每行要輸出的數字最多到行數
        {
            printf("%d", j);
        }
        printf("\n");
    }
}