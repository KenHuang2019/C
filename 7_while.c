// 7. while 迴圈敘述介紹
// 以猜數字遊戲作為範例

#include <stdio.h>

int main(){
    int i; // user input 宣告變數接收使用者的輸入
    int a=6; // answer 宣告變數存放正確答案，以初始值6做為正解

    printf("Please guess a number between 1~10:\n"); // 給使用者提示
    scanf("%d", &i); // 接收使用者猜的數字

    // 因為不確定使用者猜幾次才會中正解，所以使用while loop
    while ( i != a) // 「當」使用者輸入的數字 不等於 正解(也就是錯誤答案)
    {
        printf("Wrong anser. Please guess again:\n"); // 給使用者錯誤提示
        scanf("%d", &i); // 接收使用者猜的數字
    }
    printf("Corrent anser!\n"); // 給使用者正確提示
}
