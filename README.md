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
---
### 編譯器與開發環境
##### 我使用 Windows 10 新出的 WSL 子系統功能，安裝 Ubuntu 18.04 版本的 Linux 作業系統進行練習
##### WSL 安裝可以參考這連結：https://docs.microsoft.com/zh-tw/windows/wsl/install-win10
##### Ubuntu 18.04 Linux 有內建 gcc 編譯器，在Terminal 輸入 $ `gcc  --version` 即可確認是否有安裝此編譯器、查看版本資訊
![gcc_version_image](https://github.com/KenHuang2019/C/blob/master/images/gcc_version.png)
##### 編譯語法： `gcc -o <執行檔名稱.exe> <原始碼檔案名稱.c>`
---
### C語言基本語法
#### 0 Simple script
 * 理解C語言基礎架構
     * 學習引用函式庫 `#include <標準函式庫名稱>`
     * 使用 `printf()` 輸出字串
     * 掌握跳脫字元概念
