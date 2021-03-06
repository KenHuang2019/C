# C 語言筆記

###### 這個 Repository 會用來記錄學習C的過程，除了聽老師上課、我也看這系列教學影片：<br> 
###### https://www.youtube.com/playlist?list=PLY_qIufNHc293YnIjVeEwNDuqGo8y2Emx <br> 
###### 我會綜合兩者的內容來記錄重點，再附上練習過程用的source code
---
### 程式語言簡介
在學習C語言之前，先簡單了解語言的用途，才能知道程式能做到那些事情
```
    「語言」一般用來溝通，好比我們平常說中文，是為了要讓別人了解我們的想法，又或是讓彼此能夠合作完成某些事情
    而程式語言就是用來和電腦溝通，以目前電腦科學的發展，大多的狀況比較像是我們請電腦依照我們的邏輯來計算
    再將最後的結果告訴我們，中間的過程我們其實不一定想知道或是不一定有時間去理解
    那要理解程式如何運作之前，必須先了解電腦的基本概念，才能想像這些程式實際上是如何運作的
```
  * 電腦基本上由以下五種單元構成：
      * 控制與運算單元（CPU）
      * 記憶體單元（Memory）
      * 輔助儲存單元（Ex:硬碟）
      * 輸入單元（Ex:鍵盤滑鼠）
      * 輸出單元（Ex:螢幕）
```
    其中與程式碼最相關的是 CPU 和 Memory，他們最主要的功能就是記憶並運算
    我們可以透過輸入單元給他們的資訊（平常在鍵盤上打字、在滑鼠上點擊這些動作）
    這些資訊實際上會被編譯成一堆「0」和「1」來代表「電流沒通過」、「電流通過」 （數位訊號）
    再傳送到 CPU 來控制其電流狀態，然後透過電腦硬體在出廠時就已經寫好在上面的程式 （韌體）
    將電流轉換成運算過程，並將結果傳給作業系統，才能在Terminal上顯示一些文字或再GUI產生動畫
```
---
### 程式語言分階概念

  * 程式語言基本上分成三個階層：
      * 機器語言
           * 01000101
           * 11010100
           * 00101110
      * 組合語言
           * LOAD A1
           * ADD A2
           * STORE SUM
      * 高階語言
           * SUM = A1 + A2
```
    早期開發電腦硬體的人，發現這「機器語言」的運算方式大多是固定的
    就開發特定的指令集(例如x86, ARM, IA-64)，來代表一些 0 和 1 的排列組合
    再為這些指令取個我們比較好懂得名稱，如 ADD、LOAD、STORE SUM等單字
    並且開發翻譯這些名稱的組議器(Assembler)，也就出現了「組合語言」
    提升了程式碼的可閱讀性，思考程式怎麼寫的時候，也比0101來的更直覺一些
    
    之後還是有人覺得不夠接近日常生活所用的語言，就再開發了「高階語言」和編譯器(compiler)
    讓開發者可以用平常口語和描述數學的方式寫程式(例如 SUM = A + B)
    再將我們寫下的字詞透過編譯器翻譯成組合語言
    而現在要學的C語言正是今日眾多高階語言的發展源頭
```
---
### C 語言特色
 * 表達性強：C語言本身就是高階語言之一，較機器語言更接近人類常用的語言
 * 可攜性、可移植性高：寫一份程式碼可在不同平台上執行(因為可以先編譯成一堆01，到哪的機器都看得懂)
 * 效率佳：因為透過編譯產出的組合語言相對短，所以執行速度快，也就可寫出效率較高的程式
 常應用在工業電腦、韌體上，用來控制硬體
---
### 編譯器與開發環境
##### 我使用 Windows 10 新出的 WSL 子系統功能，安裝 Ubuntu 18.04 版本的 Linux 作業系統進行練習
##### WSL 安裝可以參考這連結：https://docs.microsoft.com/zh-tw/windows/wsl/install-win10
##### Ubuntu 18.04 Linux 有內建 gcc 編譯器，在Terminal 輸入 $ `gcc  --version` 即可確認是否有安裝此編譯器、查看版本資訊
![gcc_version_image](https://github.com/KenHuang2019/C/blob/master/images/gcc_version.png)
##### 編譯語法： `gcc -o <執行檔名稱.exe> <原始碼檔案名稱.c>`
##### 執行語法： `./執行檔名稱.exe`
---
## C語言基本語法
這邊僅記錄重點，詳細敘述會用comment寫在範例原始碼

### C語言程式基礎架構
> * [範例原始碼 0_Simple_script.c](https://github.com/KenHuang2019/C/blob/master/example/0_simple_script.c)
>    * 註解寫法 `//這是單行註解` `/* 這種是多行註解 */`
>    * 引用函式庫 `#include <標準函式庫名稱>`
>    * 理解 `main()` 架構和程式區塊
>    * 使用 `printf()` 輸出字串
>    * 理解 `return` 用途
>    * 在閱讀任何範例時學會 Follow coding style

### 字符輸出
> * [範例原始碼 1_printf.c](https://github.com/KenHuang2019/C/blob/master/example/1_printf.c)
>    * 跳脫字元 Ex: `\n`
>    * 跨行輸出
>    * format語法與specifier character `printf("代入數字%d輸出", 1)`
>    * format格式指定 `printf("a=%7.2f", 1.33333); // 結果為 1.33`

### 資料型別與變數
> * [範例原始碼 2_data_type_and_variables.c](https://github.com/KenHuang2019/C/blob/master/example/2_data_type_and_variables.c)
>    * 變數命名寫法：資料型別 變數名稱;　`int num;` ，**切記要讓名稱有意義，要能幫助他人閱讀程式**
>    * 變數命名若使用多個英文單字，第二個單字開始用大寫開頭 Ex: `int maxScore=0;`
>    * 初始化寫法：資料型別 變數名稱 = 初始值;　`int num = 0;`
>    * 使用 `scanf()` 接收使用者輸入
>    * 使用 `sizeof()` 查看變數內的資料大小
>    * 若考慮原始碼的移植性，可用標準函式庫`stdio.h`裡的`size_t`來做正整數宣告，較不受各平台定義之型別長度所限制
>    * 強制型別轉換 `(型別) 變數名稱`<br>
>   <br>
>   資料處理主要會有兩個問題: 記憶 與 計算<br>
>   型別決定了儲存和計算方式<br>
>   儲存的部分:<br>
>   電腦的記憶體空間是以 位元組(byte)為單位<br>
>   一個位元組(byte)由多個位元(bit)所構成<br>
>![byte_diagram](https://github.com/KenHuang2019/C/blob/master/images/2_byte_bit_diagram.png)<br>
>   每個bit不是0就是1，所以各種資料都可以轉換成一串01的序列表示<br>
>   這就是任何格式的檔案(文字、圖片、影片等)都可被存在硬碟上的原因<br>
>   常用的型別如下表：<br>

|    名稱   | 大小(位元組) |   例子  |
|-----------|:-----------:|:------:|
| short int |      2      |   32   |
| int       |      4      |   32   |
| long int  |      4      |   32   |
| char      |      1      |   '3'  |
| float     |      4      |   3.2  |
| double    |      8      |   3.2  |

(依實際作業系統不同可能有微小差異，完整介紹介紹可參考[維基百科](https://en.wikipedia.org/wiki/C_data_types))

### 字元編碼
> * [範例原始碼 3_char_encoding.c](https://github.com/KenHuang2019/C/blob/master/example/3_char_encoding.c)
>    * 常見編碼方式 [ASCII](https://zh.wikipedia.org/zh-tw/ASCII) 、 [Big-5](https://zh.wikipedia.org/zh-tw/%E5%A4%A7%E4%BA%94%E7%A2%BC) 、 [UTF-8](https://zh.wikipedia.org/zh-tw/UTF-8)
>    * 字元運算 `printf('A' + 1) // B`
>    * 大小寫轉換 `printf('A' + 32) // a`
>    * 可使用 getchar() 取得ASCII code Ex: `getchar('A') // 66`
>    * EOF ( End of file ) 常數常用來設定為程式終止條件，相當於在 Windows 按 Ctrl+Z 或是在 Linux & MAC 按 Ctrl+D

### 運算元、運算子、表示式
> * [範例原始碼 4_operator_and_expression.c](https://github.com/KenHuang2019/C/blob/master/example/4_operator_and_expression.c)
>    * 表示式 `5 - 4 + 3 * 2 % 1`
>    * 運算子 `+ - * / %`<br>
            /是除，若對象是整數，結果會捨去小數<br>
            %是mod，用來取餘數 `a = 7 / 4 // a = 1`<br>
>    * 運算元 `5 4 3 2 1`
>    * 按照優先順序逐一處理
>    * ()優先處理，多種優先順序時會出現 `( 1 + ( 2 + 3 ) ) * 5` 仍然用()
>    * 除法結果若為整數型態變數接收，會自動捨去小數點以下的數值
>    * 浮點數因為儲存空間有限，若微小誤差長期運算可能產生問題
>    * 整數與浮點數運算
>        * 整數會先在CPU被轉換成浮點數
>        * 浮點數與浮點數運算
>        * 若接受變數仍為整數型別會在CPU再轉回整數，這時捨去小數點以下的數值
>    * 設定運算子 `+=, -=, *=, /=, %=`：將數學運算與賦值運算結合，例如 `c = c + 1; // 等同於 c += 1; 另一種寫法是 c++ 或 ++c (若非必要就拆開寫，閱讀性較佳)`
>    * 關係運算子與邏輯運算子因為常與條件敘述混合使用，後續再紀錄重點

### 流程控制 - if 條件敘述 ( if {...} lese if {...} else {...} )
> * [範例原始碼 5_if_else.c](https://github.com/KenHuang2019/C/blob/master/example/5_if_else.c)
>    * 近似於口語的 如果... 或者... 不然... `if ( 表示式表達條件 ) { 程式執行特定功能 }`
>    * 入門可以從畫flowchart開始 (single-entry / single-exit control)
![if_statement_flowchart](https://github.com/KenHuang2019/C/blob/master/images/5_if_flowchart.png)
>    * 再把 flowchart 寫成 presudocode  
>        * if Condition // 條件 成立  
>               做 ...  
>               printf("...")  
>        * else  // 條件 不成立  
>               做 ...  
>               printf("...")  
>    * 再把 presudocode 寫成正規的 sourcecode
>    * 條件敘述的另一種寫法：(condition) ? (true) : (false); `level = grade >= 60 ? puts("Nice") : puts("Bad"); // puts()是單純輸出文字在 Terminal 上`
>    * 關係運算子：`>, <, ==, !=, >=, <=`，和數學上的邏輯一致，Ex:
>        * `1 > 2 // 0 (False)`
>        * `1 < 2 // 1 (True)`
>        * `1 == 2 // 0 (False)`
>        * `1 != 2 // 0 (True)`
>        * `1 >= 2 // 0 (False)`
>        * `1 <= 2 // 0 (True)`
>    * 邏輯運算子：`&&, ||, !`
>        * `&&`:「而且」只要其中一個是True，結果就是True，Ex: `1 < 2 && 2 >= 3 // 等同於 1 && 0 (T && F) 結果是 1(T)`
>        * `||`:「或者」只要其中一個是False，結果就是False，Ex: `1 > 2 || 2 <= 3 // 等同於 0 || 1 (F || T) 結果是 0(F)`
>        * `!` :「非」，可將該真假值反轉，Ex: `!(1 < 2) && 2 < 3 // 先轉換成 !(0) && 0 (!(F) && F) 等同於 1 && 0 (T && F) 結果是 1(T)`
>        * 使用邏輯運算子時，優先放容易達成的條件，可節省運算時間。以上方`1 < 2 && 2 >= 3`為例，程式執行到 `1 < 2 &&`的時候就直接判定整體真偽值為1，不會再去比較 `2>=3`
>    * 表示式的真假值判定：
>        * 只有 0 是 False
>        * 其餘像是 -1, 2, 0.001, 'A', '\0' 皆為 True
>    * 優先順序上，算術 > 關係 > 邏輯 > 賦值 運算子
>    * 若條件成立，且須執行程式碼僅有一行可省略條件敘述之後的{}，Ex:
```c
#include <stdio.h>

int main(){
    int a = 5;
    if(a < 5)
        printf("a < 5\n");
    else if(a > 5)
        printf("a > 5\n");
    else
        printf("a = 5\n");
}
```
### 流程控制 - switch 條件敘述 ( switch (變數) { case 條件: ...; break; case 條件: ...; break; default: ...; } )
> * [範例原始碼 6_switch.c](https://github.com/KenHuang2019/C/blob/master/example/6_switch.c)
>    * if ... else if ... else ... 的另一種寫法，但語法上更簡潔，不需要重複寫被判斷的變數名稱及部分運算子
>    * 不適用於多重數值區間判斷，比較適合單一變數的多種等於狀態判斷
![switch_statement_flowchart](https://github.com/KenHuang2019/C/blob/master/images/6_switch_flowchart.png)
```c
#include <stdio.h>

int main(){
    char a = '3';
    switch (a) {
        case '1':
            printf("a is 1\n");
            break;
        case '2':
            printf("a is 2\n");
            break;
        case '3':
            printf("a is 3\n");
            break;
        default:
            printf("a is not 1 or 2 or 3\n");
}
```
### 流程控制 - while 迴圈敘述 ( while (表達式) { ... } )
> * [範例原始碼 7_while.c](https://github.com/KenHuang2019/C/blob/master/example/7_while.c)
>    * 迴圈可重複執行特定功能
>    * while 迴圈近似於口語的「當」表達式成立(也就是真偽值是1)，就做...
>    * while 迴圈適用於「不確定會執行次數的狀態」
>    * 須注意程式寫法是否能滿足終止條件，否則會產生無窮迴圈
![while_statement_flowchart](https://github.com/KenHuang2019/C/blob/master/images/7_while_loop_flowchart.png)
```c
#include <stdio.h>

int main(){
    int a = 1;
    while (a != 3) { // 當a不等於3時，執行以下程式
        printf("a = %d\n", a); // 輸出每次迴圈當下的數值
        a++; // 使a在每次迴圈結束前+1，這個步驟非常重要！通常在回圈內都會有遞增或遞減的寫法來讓迴圈達成終止條件
    }
}
```
### 流程控制 - do-while 迴圈敘述 ( do { ... } while (表達式); )
> * [範例原始碼 8_do_while.c](https://github.com/KenHuang2019/C/blob/master/example/8_do_while.c)
>    * 類似於while迴圈，但會先執行特定功能才判斷表達式的狀態 <br>
![do_while_statement_flowchart](https://github.com/KenHuang2019/C/blob/master/images/8_do_while_loop_flowchart.png)
```c
#include <stdio.h>

int main(){
    int a = 1;
    do { // 無論如何先執行以下程式
        printf("a = %d\n", a); // 輸出每次迴圈當下的數值
        a++; // 使a在每次迴圈結束前+1，這個步驟非常重要！通常在回圈內都會有遞增或遞減的寫法來讓迴圈達成終止條件
    } while (a != 3); // 執行到這行才決定是否重複執行，和上方相比，因為比對不等於3之前就先做+1，所以迴圈會少做一次就滿足結束迴圈的條件
}
```
### 流程控制 - for 迴圈敘述 ( for (初始值; 條件式; 迴圈式;) { ... } )
> * [範例原始碼 9_for.c](https://github.com/KenHuang2019/C/blob/master/example/9_for.c)
>    * 與while和do-while迴圈不同的地方在於，for迴圈適用於已知執行次數的狀態
![for_statement_flowchart](https://github.com/KenHuang2019/C/blob/master/images/9_for_loop_flowchart.png)
```c
#include <stdio.h>

int main(){
    for (int a = 1; a <= 3; a++) // for 後面的()內需要依序填入「初始值」、「條件式」、「迴圈式」
    {
        printf("a: %d\n", a); // 提示當前迴圈執行次數
    }
}
```
### 流程控制 - break 敘述
> * [範例原始碼 10_break.c](https://github.com/KenHuang2019/C/blob/master/example/10_break.c)
>    * 直接無視終止條件跳出迴圈
![break_statement_flowchart](https://github.com/KenHuang2019/C/blob/master/images/10_break_flowchart.png)

### 流程控制 - continue 敘述
> * [範例原始碼 11_continue.c](https://github.com/KenHuang2019/C/blob/master/example/11_continue.c)
>    * 略過該迴圈剩下程式，直接進入下個迴圈
![continue_statement_flowchart](https://github.com/KenHuang2019/C/blob/master/images/11_continue_flowchart.png)

### 函式 ( 回傳值型別 函式名稱 (參數型別 參數名稱, ...) { ... reutn 回傳值; } )
> * [範例原始碼 12_function.c](https://github.com/KenHuang2019/C/blob/master/example/12_function.c)
>    * 基於數學上的函數概念，透過分而治之（Divide and Conquer）的手法將片段程式設計為獨立模組（Module），具有特定功能
>    * 通常目的都是為了「重複利用」特定功能，或是「讓程式碼更好閱讀」
>    * 在主程式中，需要先被定義才能呼叫來做使用
>    * 若執行內容一定要放在呼叫函式的後方，也要先做宣告 `回傳值型別 函式名稱 (參數型別, 參數型別, ...)` 可將變數名稱與函式內容留到後方再寫
```c
#include <stdio.h>

int add_1(int x) {
    return x + 1;
}

int main(){
    for (int a = 1; a <= 3; a++)
    {
        printf("a: %d\n", add_1(a)); // 原本輸出會是 1, 2, 3，現在多了 add_1()，就會把原本的1 2 3丟進add_1 function進行運算再將結果回傳，也就會輸出2, 3, 4
    }
}
```
### 標準函式庫
> * [範例原始碼 13_library.c](https://github.com/KenHuang2019/C/blob/master/example/13_library.c)
>    * 將很多常用到的函式寫在標頭檔裡，所以檔名結尾都會有.h (headers)
>    * 標準函式庫主要提供這些功能：
>       * 字串處理 Ex: `#include <ctype.h>`
>       * 數學運算 Ex: `#include <cmath.h>`
>       * 輸入、輸出處理 Ex: `#include <stdio.h>`
>       * 記憶體管理 Ex: `#include <stdlib.h>`
>       * 與作業系統服務相關功能
>    * 若對任何函式有疑問可以上[cplusplus網站](http://www.cplusplus.com/reference/clibrary/)查詢詳細說明

### 變數作用域 ( Scope )
> * [範例原始碼 14_scope.c](https://github.com/KenHuang2019/C/blob/master/example/14_scope.c)
>    * 依照宣告位置而言，一共分為三種類型：
>       * 全域變數（Global variable）：宣告在函式外面，因容易造成汙染，應盡量避免使用。在編譯時就會初始化好，直到程式結束
>       * 區域變數（Local variable）：宣告在函式內（被包含在{}內），是最常使用到的種類。使用到的時後才做初始化
>       * 函式參數（Formal parameter）：僅在函式的參數位置使用
```c
#include <stdio.h>

int g; //  g 為 全域變數（Global variable）

int main(){
    int l; // l 為 區域變數（Local variable）
    {
        int l; //  l 為 區域變數（Local variable）
    }
}

int f(int fp) { // fp 為 函式參數（Formal parameter）
    return 0;
}
```

### 變數儲存等級 ( Storage class )
> * [範例原始碼 15_storage_class.c](https://github.com/KenHuang2019/C/blob/master/example/15_storage_class.c)
>    * 依照變數在記憶體的儲存方式可分為四個種類：
>       * 自動變數，語法： `auto int x;`，為系統預設儲存方式，在函數要被使用時才分配，函數結束時還給作業系統（基本上不會寫auto，讓系統自動配置就好）
>       * 靜態變數，語法： `static int x;`，從程式開始執行就分配記憶體空間，直到程式結束後才會還給作業系統
>       * 外部變數，語法： `extern int x;`，用於宣告存放在其他檔案中的變數（通常以Global scope宣告，才可直接被 main function 引用；狀態則類似static，會從程式開始執行就存在，直到程式結束才回收記憶體空間）
>       * 暫存器變數，語法： `register int x;`，直接將變數放在暫存器，處理速度上會比一般放在DRAM來得快
>    * `extern int x` 用法通常會在自定義 header 檔案時使用，自定義的 header 可透過 ` #include "自定義檔案名稱.h"; ` 語法引入，通常與標準函式庫一起放在程式開頭

### 列舉 ( enumerate )
> * [範例原始碼 16_enunerate.c](https://github.com/KenHuang2019/C/blob/master/example/16_enuerate.c)
>    * enumerate 是一種複合型別，將自定義詞彙作為程式中數個獨一無二的符號 (symbol)，再 mapping 到 index 做運算
>    * 常用在宣告僅有少數值的變數，像是一星期內的日 ( Monday, Tuesday, ... ) 或是月份等
>    * 主要目的是增加程式的閱讀性
>    * 可定義多個 enumerate 複合型別，但其內容所使用到的符號不可重複
```c
#include <stdio.h>

enum e { A, B, C, D }; // enumerate 宣告語法

int main(){
    enum e alphabet = A; // 若要使用 enumerate 變數的宣告方法
    printf("%d", dest); // 因為 enumerate 是對 index 做 mapping，所以此例的 A 是 0
}
```

### 亂數生成
> * [範例原始碼 17_random_number.c](https://github.com/KenHuang2019/C/blob/master/example/17_random_number.c)
>    * 標準函式庫 stdlib.h 裡面有一個函式 rand() 可透過數學公式產出一序列的隨機數
>    * 但電腦無法產生完全隨機的數（重新執行一次的序列會一樣），因此通常搭配 srand() 和 time(NULL) 函式，以當下時間生成的無號整數作為seed

### 遞迴 ( Recursion )
> * [範例原始碼 18_recursion.c](https://github.com/KenHuang2019/C/blob/master/example/18_recursion.c)
>    * 將問題拆解後，在函式內重複呼叫函式本身，重複特定計算解決可被重複分解的問題
>    * 使用時須注意問題拆解後的結構，可能會出現效能問題

### 溢位問題 ( Overflow )
> * [範例原始碼 19_overflow.c](https://github.com/KenHuang2019/C/blob/master/example/19_overflow.c)
>    * 超過變數能表示的範圍時，變數內儲存之數值會無法正常顯示
>    * 可透過標準函式庫 `#include <limits.h>` 的 `INT_MAX` 或 `INT_MIN` 這類語法來檢視變數可儲存之數值範圍

### 陣列 ( 元素資料型別 陣列變數名稱 \[元素個數] )
> * [範例原始碼 20_array.c](https://github.com/KenHuang2019/C/blob/master/example/20_array.c)
>    * 陣列屬於一種資料結構，特性是用一段連續記憶體空間儲存一組類似的資訊，因此具有結構性，也就比較容易進行存取的動作
>    * 宣告時與一般變數類似，但須在變數名稱後方加上中括號，賦予值的時候，需要加上大括號，Ex: `int arr[2] = {0, 1};`
>    * 若陣列宣告時，所賦予的值不滿足元素個數，其餘空間會自動補上 0
>    * 陣列宣告也可不定義元素個數，程式會自動以後方資料長度來定義元素個數，Ex: `int arr[] = {0, 1, 2, 3}`，元素個數會自動定義為 4
>    * 陣列變數名稱即為該陣列的起始記憶體位置，若需傳遞陣列進入函式，只要傳陣列變數名稱即可(通常連元素個數一起傳入，方便存取時使用)
>    * 一般變數傳入另一個函示會複製一份資料(call by value)，陣列僅複製要傳遞的開頭指標，並將此指標傳入其他函式，所以若在其他函式內改變陣列內儲存的值，都會直接連動到原本陣列(call by address)，使用時要謹慎思考這個特性
>    * 讀取陣列元素時，需將 index 放在中括號內，可結合運算式進行讀取，Ex: `arr[n+1]`
>    * 讀取陣列元素時，不可超出存取範圍。一旦超出範圍，可能讀取倒垃圾資料，或影響到其他程式的時候，作業系統會自動將該程式強制終止(Compiler 不會檢查這種錯誤)
>    * 可使用 `sizeof()` 量測陣列長度
```c
#include <stdio.h>

int main(){
    int arr[3] = {0, 1, 2}; // 若要使用陣列的宣告方法
    for(int i = 0; i < 3; i++)
    {
        printf("%d", arr[i]); // 陣列的中誇號內可放入運算式或變數作為 index 再讀取陣列元素
    }
}
```

### 字串（ String ）
> * [範例原始碼 21_string.c](https://github.com/KenHuang2019/C/blob/master/example/21_string.c)
>    * 字串在C語言是以一段連續字元組成，並不是另一種資料型別
>    * 儲存字串的宣告方式與一般字元相同，Ex: `char string_1[] = "string";` 但字串內容前後需用雙引號包住
>    * 字串結尾有一個 null character 用來表示這些字元是個字串，若宣告時有指定元素個數，需多留個位置給 null character
>    * 使用 `sizeof()` 量測陣列長度時，會連同 null character 一起算進去，比較好的方法是自己寫迴圈去讀取計數，計到程式讀到 \0 為止
>    * 透過scanf讀取字串時，變數名稱前不需要加 & ，Ex: `scanf("%s", string_1);`，因為變數名稱直接就是 address
```c
#include <stdio.h>

int main(){
    char str[] = "abc"; // 若要使用陣列的宣告方法
    printf("%s", str); // 在 Terminal 輸出 abc
}
```



<!--
章節原始碼範例:

### 章節標題
> * [範例原始碼 程式名稱](source_code_URL)
>    * 重點紀錄 `重要函數()`
-->
