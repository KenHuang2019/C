// 18. recursion 練習
/* 題目：Fibonacci 數列
 * 0, 1, 1, 2, 3, 5, 8 .....
 * 從第 3 項開始，該項的數字等於前兩項的和
 */

#include <stdio.h>

int f(int n){
    if (n < 2)
    {
        return n; // 第一、二次的數字等於項數
    }
    return f( n - 1 ) + f( n - 2 ); // 不斷把前面兩項的和加總起來
}

int main(){
    int n;
    printf("Please neter a lenth(int) of a Fibonacci sequence:\n");
    scanf("%d", &n);

    printf("Fibonacci sequence:\n");
    for (int i = 1; i <= n; i++)
    {
        printf("No.%d : %d \n", i, f(i));
    }
}