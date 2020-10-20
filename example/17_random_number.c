// 17. 亂數生成介紹
// 產生使用者無法預期的亂數

#include <stdio.h>
#include <stdlib.h> // 需要用到 rand()、srand()
#include <time.h> // 需要用到 time()

int main()
{
   srand(time(NULL)); // 透過程式執行的當下時間作為seed來生成亂數，通常在一隻程式內宣告一次即可，也要避免放入別的 function 造成重置

   for (int i = 0; i < 3; i++)
   {
      printf("%d\n", rand()); // 只要每次執行時的時間無法被掌握，數字就無法被預期
   }
}