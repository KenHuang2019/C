// 13. 標準函式庫介紹
// 引用 math.h 來求平方根

// 這邊是引用標準函式庫需要使用的 include 語法，基本上可以直接從函式庫名字判斷用途
#include <stdio.h> // 具有處理輸入輸出的函式，例如我們常用的 printf()
#include <math.h> // 收集很多用來做數學運算的函式
#include <time.h> // 用來處理和時間有關的函式
#include <ctype.h> // 用來處理字元相關的函式

int main(){
    // math.h 範例
    int n=9;
    printf("square root of %d is : %f\n", n, sqrt(n)); // 像是 sqrt是用來取得數字的平方根，上方引入後即可直接使用

    // time.h 範例
    time_t rawtime; // 使用 time_t 宣告的變數，是時間資料的特殊型別，通常搭配time函式使用
    time (&rawtime); // time 函式會 return 一個整數，是從「1970年1月1日」~「當下」的秒數加總
    printf ("Local time is: %s\n", ctime (&rawtime)); // ctime 函式則可以將秒數轉換成人類好懂得格式："星期 月份 日 小時:分鐘:秒數 年份"

    // ctype.h 範例
    char c = 'a';
    // isalpha 函式的回傳值若為 0 則不是字母，若非 0 則是字母
    printf("variable 'c' is an alphabet? %d\n", isalpha(c)); // 1024
    printf("variable 'n' is an alphabet? %d\n", isalpha(n)); // 0
}