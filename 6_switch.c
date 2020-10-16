// 6. switch 條件敘述介紹
/*
以下列敘述為範例
Ken 擁有 House、Airplane、Dog
Neo 擁有 Car、Moto
Doris 只有 Bicycle
寫這隻程式來判斷物品是誰的

假設我們用每個單字的開頭代表該物件

如果用if else語法會是這樣:

char i;
scanf("%c", &i); // 接收使用者的輸入
if (i == 'H' || i == 'A' || i == 'D' )
{
    printf("Ken\n");
}
else if (i == 'C' || i == 'M')
{
    printf("Neo\n");
}
else if (i == 'B')
{
    printf("Doris\n");
} 
else {
    printf("Unknown\n");
}
那可以對照以下 switch 寫法
*/

#include <stdio.h>

int main(){
    char i; // 宣告存放物件(item)資訊的變數
    scanf("%c", &i); // 接收使用者的輸入

    switch ( i ) { // 放入要判斷的變數
        case 'H': // 若不寫break則會繼續往下執行
        case 'A':
        case 'D':
            printf("Ken\n"); // 表示該物件屬於 Ken
            break;// 若加上break則會跳出此switch敘述，不往下比對
        case 'C':
        case 'M':
            printf("Neo\n"); // 表示該物件屬於 Neo
            break;
        case 'B':
            printf("Doris\n"); // 表示該物件屬於 Doris
            break;
        default:
            printf("Unknown\n"); // 若上述條件都不滿足則執行 default
    }
}