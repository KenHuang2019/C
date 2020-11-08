// 21. 字串介紹
/* 以 Hello world 為範例
 * 將字串存入陣列，再輸出於 Terminal
 */

#include <stdio.h>

int main()
{
   char str1[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // 字串在 C 語言中，是用一串連續字元組成，並以 \0 作為字串結尾
   printf("%s\n", str1); // 可直接將字串陣列輸出於 Terminal
   printf("%zu\n", sizeof(str1)); // sizeof可用來度量陣列長度

   char str2[] = "world"; // 若要直接儲存 字串 必須用 雙引號，程式會自動在結尾補上 \0
   printf("%s\n", str2);
   printf("%zu\n", sizeof(str2)); // 等同於上方 Hello + \0 的長度
}