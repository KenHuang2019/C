// 8. do_while 迴圈敘述介紹
// 延伸7.猜數字遊戲範例，但結合if條件敘述增加使用者提示

#include <stdio.h>

int main(){
    int i; // user input 宣告變數接收使用者的輸入
    int a=6; // answer 宣告變數存放正確答案，以初始值6做為正解

    // 因為不確定使用者猜幾次才會中正解，所以使用 do-while loop
    do
    {
        printf("Please guess a number between 1~10:\n"); // 給使用者提示
        scanf("%d", &i); // 接收使用者猜的數字
        if (i>a)
            printf("The number is too large. Please try again.\n"); // 給使用者「數字太大」的提示
        else if (i<a)
            printf("The number is too small. Please try again.\n"); // 給使用者「數字太小」的提示
        else
           printf("Corrent anser!\n"); // 給使用者正確提示
    } while ( i != a); // 「當」使用者輸入的數字 不等於 正解(也就是錯誤答案)
}