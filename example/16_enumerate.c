// 16. 列舉介紹

#include <stdio.h>

enum direction_full { North, South, East, West }; // 此為 enumerate 宣告語法，direction為列舉變數名稱，可自行針對其內容更換成有意義的名稱
enum direction_short { N, S, E, W }; // 可使用多個列舉，但其內含符號不可重複，compiler會報錯

int main(){
    enum direction_full dest = East; // 此為使用 enumerate 變數的宣告方法，East因為在上方宣告時放在第3個位置，所以實際上mapping到的index是2，值也就是2
    enum direction_short d = E;

    if ( dest == d )
    {
       printf("Ther are the same,\ndest value: %d\nd value: %d\n", dest, d); // 2
    }
    else
    {
       printf("Ther are the same,\ndest value: %d\nd value: %d\n", dest, d);
    }
}