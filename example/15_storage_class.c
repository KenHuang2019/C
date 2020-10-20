// 15. 變數儲存等級介紹

#include <stdio.h>
#include "./15_storage_class_header.h" // 若使用自定義的 header file，可用此語法引入

int static_variable_example()
{
    int a_var = 0; // 此為自動變數，因為函數使用後會自動回收記憶體空間，所以當再次呼叫此函數時會被複寫回10
    static int s_var = 0; // 此為靜態變數，因為函數第一次使用後變數會一直存在，所以再次呼叫時會以當前記憶體所擁有的值繼續執行
    printf("a_var1=%d, s_var= %d \n", a_var++, s_var++);
    return 0;
}

int main()
{
    extern int extern_variable; // 此變數存放在自定義的 header file，可用extern語法宣告
    printf("%d\n", add_1(extern_variable)); // add_1 函式被定義在15_storage_class_header.h內，透過上方include語法引用後即可呼叫
    for (int i = 0; i < 3; i++)
    {
        static_variable_example();
    }
}