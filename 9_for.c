// 9. for 迴圈敘述介紹
// 以數值1~10加總作為範例

#include <stdio.h>

int main(){
    // 因為已知終止條件，所以使用 for loop
    int sum=0;
    for (int n = 1; n <= 10; n++) // for 後面的()內需要依序填入「初始值」、「條件式」、「迴圈式」
    {
        printf("loop: %d\n", n); // 提示當前迴圈執行次數
        sum += n; // 隨著迴圈遞增進行加總動作
        printf("sum: %d\n", sum); // 輸出當前加總的數值，最後一個輸出的就是所有數字加總
    }
}