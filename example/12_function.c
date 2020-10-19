// 12. function 函式介紹
// 沿用9.for 迴圈範例，將輸出與加總等動作寫成一個function並回傳加總的值

#include <stdio.h>

int sum_n (int, int); // 先宣告會被呼叫的函式，輸入參數的地方僅需依照參數個數和型別填入，變數名稱可留至下方再寫

int main(){
    int sum=0;
    for (int n = 1; n <= 10; n++)
    {
        sum = sum_n(sum, n);
    }
}

int sum_n (int sum, int n){ // 定義函式內容
    printf("loop: %d\n", n); 
    sum += n;
    printf("sum: %d\n", sum);
    return sum; // 若需回傳值給 main function 要使用 return
}