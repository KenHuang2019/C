// 18. recursion 練習
/* 題目：上樓梯方法數
 * 假設每次可走一階或兩階
 * 印出走到第N階的可能走法
 * 可透過前3階就看出規律
 * 例如 
 * N = 1，方法有 [ (1) ]
 * N = 2，方法有 [ (1, 1) , (2)]
 * N = 3，方法有 [ (1, 1, 1) , (1, 2) , (2, 1) ]
 * 從這邊可以把走3階的方法拆解成這樣：
 * 2  |  1
 * ---------------------
 * 1  |  1 , 1
 * 1  |  2
 * 跨出第一步之後的所有可能，會等於前面兩次的所有走法相加
 */

#include <stdio.h>

int S(int n){
    if (n <= 2)
    {
        return n; // 第一、二次的走法等同於次數
    }
    return S( n - 1 ) + S( n - 2 ); // 前面兩次的所有走法相加
}

int main(){
    int n;
    printf("Please neter a N(int) of a stair :\n");
    scanf("%d", &n);
    printf("%d solutions\n", S(n));
}