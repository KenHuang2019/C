// 7. while 迴圈練習
/* 題目：接收一個使用者輸入的 int 數字，逐一將每個位數的數字輸出於 Terminal
* 假設輸入 6431，Terminal會輸出以下數字
* 1
* 3
* 4
* 6
*/

#include <stdio.h>

int main(){
    int n;
    printf("Please enter a number(int):\n");
    scanf("%d", &n);
    if (n != 0)
    {
        while ( n != 0 )
        {
            printf("%d\n", n%10);
            n /= 10;
        }
    }
    else
    {
        printf("0\n");
    }
}