// 3. 字元編碼介紹
// 此範例以英文大小寫轉換功能來說明字元編碼及其運算
/*
一般常見的英文編碼式ASCII(American Standard Code for Information Interchange)
最早發明電腦的是美國人，為了解決字元在電腦中儲存、運算的問題
他們給了每個字元獨一無二的編碼，其中包含大小寫英文、數字及常見符號
詳細編碼請參考維基百科：https://zh.wikipedia.org/zh-tw/ASCII
後來電腦逐漸普及，為了解決其他語言的文字編碼，開始出現Big-5和Utf-8...等編碼方式
詳細資訊請參考維基百科：https://zh.wikipedia.org/zh-tw/UTF-8
因為其他語言的文字數量較多，為了要能夠涵蓋所有可能
發展出wchar_t的型別，讓電腦可儲存、識別文字數較多的語言
*/

#include <stdio.h>

int main() {
    char c; // 宣告接收字元的容器
    printf("Please enter one eng character: \n");
    scanf("%c", &c); // 接收使用者的輸入
    if ( c > 90 )  // 判斷輸入的大小寫
    {
        c = c - 32; // 轉換為大寫
    }
    else
    {
        c = c + 32;  // 轉換為小寫
    }
    printf("%c\n", c); // 輸出轉換結果
}