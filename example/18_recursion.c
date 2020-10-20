// 18. 遞迴介紹
// 接收使用者輸入數字作為階層計算的功能為範例

#include <stdio.h>

int f (int n){
   if ( n <= 1 )
      return 1;
   else
      return n * f(n - 1); // 透過呼叫自己這個函式將數字遞減
}

int main()
{
   int n;
   printf("Please enter a number(int):\n");
   scanf("%d", &n);
   printf("%d\n", f(n) ); // 假設是5!，可展開為 5 * 4!，以此類推
}