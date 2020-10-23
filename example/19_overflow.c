// 19. 溢位介紹

#include <stdio.h>
#include <limits.h>

int main()
{
   int n = 1000;
   int a = n * n * n;
   int b = n * n * n * n;
   unsigned int c = n * n * n * n;
   unsigned int d = n * n * n * n * n;
   
   printf("a (normal)  %d\n", a ); // 正常
   printf("b (overflow) : %d\n", b ); // 溢位
   printf("c (normal) : %u\n", c ); // 1000000000000 % ( UINT_MAX + 1 )  原本結果 除上 最大值+1 的 餘數，在特定情況可被使用

   printf("MAX : %d\n", INT_MAX ); // 查看 int 儲存範圍 上限
   printf("MAX : %d\n", INT_MIN ); // 查看 int 儲存範圍 下限
   printf("MAX : %u\n", UINT_MAX ); // 查看 unsigned int 儲存範圍 上限
}