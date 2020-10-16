// C語言基礎程式結構介紹
// 「//」是單行註解語法，通常用在程式的簡短補充說明
/* 
「/*」則是用在跨行註解
通常在一隻程式開頭
會用註解說明這隻程式的用途與作者等相關資訊
*/

#include <stdio.h> // C語言有標準的 I/O Library , 讓電腦可以跟作業系統溝通，讓它執行下方 main function

int main(void) // 需定義此function執行完要回傳的資料型別(此處以int為例)，void 的意思是不帶入任何參數進到這個function，現代編譯器可省略void不寫
{   // 大括號{}包住的部分稱為一個區塊，此為區塊開始

    // printf是事先寫好的function，透過上方的 #include引入做使用
    printf( //print是指讓作業系統輸出後面的字在cmd上的意思，f是format，讓程式依照閱讀\n這類跳脫字元進行換行等格式化動作
        "Hello World!" // 此為字串寫法，通常用雙引號 " 包住資料
    );

    return 0;// 當 function 執行結束時，將 0(代表執行完畢) 回傳給作業系統。 當今新版本的compiler會在沒寫return時，自動補上 return 0，所以若無特殊情形可省略不寫
} // 區塊結束
