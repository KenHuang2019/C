// 20. 陣列介紹
/* 以擲骰子 600 次 為範例
 * 將各點數出現次數放入陣列做紀錄後輸出給使用者
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIE_MAX_NUM 6 // 骰子只有六面是固定的，可用全域變數定義作為常數

void printNum(int counter[])
{
   for (int j = 0; j < DIE_MAX_NUM; j++) // 這個 for loop 用來將每種點數出現的次數輸出
   {
      printf("Number %d: (normal)  %d\n", j+1, counter[j] ); // j+1是為了讓輸出的值不要從0開始，使用者讀起來較直觀
   }
}

int main()
{
   srand(time(NULL)); // seed
   int counter[DIE_MAX_NUM] = {0}; // 用來放骰子點數出現次數的容器
   for (int i = 0; i <=600; i++) // 擲骰子是個重複行為，而且知道終止條件是 5000 次，用 for loop 來寫 
   {
      int dice = rand() % 6; // 用亂數除上6之後取餘數，當作擲骰子的動作
      counter[dice]++; // 將 dice 直接作為讀取陣列的 index，用來記錄每種點數出現的次數
   }
   
   printNum(counter); // 傳遞陣列進別的函示只需要傳變數名稱，因為變數名稱就是陣列開頭的記憶體位置
}