// 20. 陣列介紹
/* 以擲骰子 600 次 為範例
 * 將各點數出現次數放入陣列做紀錄後輸出給使用者
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   srand(time(NULL)); // seed
   int counter[6] = {0}; // 用來放骰子點數出現次數的容器
   for (int i = 0; i <=600; i++) // 擲骰子是個重複行為，而且知道終止條件是 5000 次，用 for loop 來寫 
   {
      int dice = rand() % 6; // 用亂數除上6之後取餘數，當作擲骰子的動作
      counter[dice]++; // 將 dice 直接作為讀取陣列的 index，用來記錄每種點數出現的次數
   }
   
   for (int j = 0; j < 6; j++) // 這個 for loop 用來將每種點數出現的次數輸出
   {
      printf("Number %d: (normal)  %d\n", j+1, counter[j] ); // j+1是為了讓輸出的值不要從0開始，使用者讀起來較直觀
   }
}