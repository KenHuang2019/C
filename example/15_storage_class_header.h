// 15. 變數儲存等級介紹
// 此 header 檔案主要用來被 15_storage_class.c 做 include，藉此說明 extern 語法

int extern_variable = 1; // 此為外部變數示範

int add_1(int input){ // 此為外部函式示範，可自訂義常用函式並使用 header include的方法重複使用
    return input+1;
}