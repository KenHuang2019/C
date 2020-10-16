# C 語言筆記

###### 這個 Repository 會用來記錄學習C的過程，除了聽老師上課、我也看這系列教學影片：<br> 
###### https://www.youtube.com/playlist?list=PLY_qIufNHc293YnIjVeEwNDuqGo8y2Emx <br> 
###### 會綜合兩者的內容記錄重點，再附上練習過程用的source code
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
> * [範例原始碼 0_Simple_script.c](https://github.com/KenHuang2019/C/blob/master/0_simple_script.c)
>    * 註解寫法 `//這是單行註解` `/* 這種是多行註解 */`
>    * 引用函式庫 `#include <標準函式庫名稱>`
>    * 理解 `main()` 架構和程式區塊
>    * 使用 `printf()` 輸出字串
>    * 理解 `return` 用途
>    * 在閱讀任何範例時學會 Follow coding style

### 字符輸出
> * [範例原始碼 1_printf.c](https://github.com/KenHuang2019/C/blob/master/1_printf.c)
>    * 跳脫字元 Ex: `\n`
>    * 跨行輸出
>    * format語法與specifier character `printf("代入數字%d輸出", 1)`
>    * format格式指定 `printf("a=%7.2f", 1.33333); // 結果為 1.33`

### 資料型別與變數
> * [範例原始碼 2_data_type_and_variables.c](https://github.com/KenHuang2019/C/blob/master/2_data_type_and_variables.c)
>    * 變數命名寫法：資料型別 變數名稱;　`int num;` ，**切記要讓名稱有意義，要能幫助他人閱讀程式**
>    * 初始化寫法：資料型別 變數名稱 = 初始值;　`int num = 0;`
>    * 使用 `scanf()` 接收使用者輸入
>    * 使用 `sizeof()` 查看變數內的資料大小
>    * 強制型別轉換 `(型別) 變數名稱`<br>
>   <br>
>   資料處理主要會有兩個問題: 記憶 與 計算<br>
>   型別決定了儲存和計算方式<br>
>   儲存的部分:<br>
>   電腦的記憶體空間是以 位元組(byte)為單位<br>
>   一個位元組(byte)由多個位元(bit)所構成<br>
>![byte_diagram](https://github.com/KenHuang2019/C/blob/master/images/2_%E8%B3%87%E6%96%99%E5%9E%8B%E5%88%A5.png)<br>
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
> * [範例原始碼 3_char_encoding.c](https://github.com/KenHuang2019/C/blob/master/3_char_encoding.c)
>    * 常見編碼方式 [ASCII](https://zh.wikipedia.org/zh-tw/ASCII) 、 [Big-5](https://zh.wikipedia.org/zh-tw/%E5%A4%A7%E4%BA%94%E7%A2%BC) 、 [UTF-8](https://zh.wikipedia.org/zh-tw/UTF-8)
>    * 字元運算 `printf('A' + 1) // B`
>    * 大小寫轉換 `printf('A' + 32) // a`

### 運算元、運算子、表示式
> * [範例原始碼 4_operator_and_expression.c](https://github.com/KenHuang2019/C/blob/master/4_operator_and_expression.c)
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

### 流程控制 - 條件敘述 ( if {...} leseif {...} else {...} )
> * [範例原始碼 5_.c](https://github.com/KenHuang2019/C/blob/master/5_.c)
>    * 近似於口語的 如果... 或者... 不然... `if ( 表示式表達條件 ) { 程式執行特定功能 }`
>    * 入門可以從畫flowchart開始 (single-entry / single-exit control)
![condition_statement_flowchart](https://github.com/KenHuang2019/C/blob/master/images/5_condition_statement_flowchart.png)
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
>        * `&&`:「而且」只要其中一個是True，結果就是True，Ex: `1 < 2 && 2 >= 3 // 等同於 1 && 0 (T && F) 所以結果是 1(T)`
>        * `||`:「或者」只要其中一個是False，結果就是False，Ex: `1 > 2 || 2 <= 3 // 等同於 0 || 1 (F || T) 所以結果是 0(F)`
>        * `!` :「非」將該變數真假值反轉，Ex: `!(1 < 2) && 2 < 3 // 先轉換成 !(0) && 0 (!(F) && F) 等同於 1 && 1 (T && T) 結果是 1(T)`
>    * 表示式的真假值判定：
>        * 只有 0 是 False
>        * 其餘像是 -1, 2, 0.001, 'A', '\0' 皆為 True
>    * 優先順序上，算術 > 關係 > 邏輯 > 賦值 運算子

```
章節原始碼範例:

### 章節標題
> * [範例原始碼 程式名稱](source_code_URL)
>    * 重點紀錄 `重要函數()`
```
