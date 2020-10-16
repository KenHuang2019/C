// 2. 資料型別與變數介紹
// 以兩數字相加程式做示範
// 程式功能是讓使用者在 Terminal 輸入兩個數字
// 在將兩數和回傳給使用者

#include <stdio.h>

int main() {
    /*
    因為我們不確定使用者會給甚麼數字，只能先指定程式預留記憶體空間，所以需要先設定"變數"
    變數名稱的命名是有限制、原則的
    1.不能以數字開頭
    2.大小寫代表不同命名，例如num和Num是兩個不同的變數
    3.只能以英文、數字、底線命名，不允許其餘字符
    4.不可使用保留字，保留字的意思是這語言用來定義特殊用途的名稱或程式有許多已經寫好的常用function，為了不與他們衝突，不可使用特定名稱，如int或printf
    5.通常放在每個function的開頭，不要放在程式中間，不好找就難維護
    詳細介紹請參考這裡: https://pclevinblog.pixnet.net/blog/post/314560420-c-%E8%AA%9E%E8%A8%80%E5%8F%8A%E9%97%9C%E9%8D%B5%E5%AD%97-reserved-keywords
    */
    int number1; // 設定變數的動作叫做「宣告"，需先指定資料型別，此處用int意思是整數，number1的位置是變數名稱(可自行定義)
    int number2, sum=0; // 若相同數據類別，可在同一行以逗號隔開做分號
    /*
    上面寫法為「未定義行為」，適用於變數會先被複寫的狀況
    若變數會直接被拿來運算或輸出，需做「初始化」，宣告同時直接指定初始值
    寫法如下:
    資料型別 變數名稱 = 初始值;
    int num  = 0;
    初始化需要額外運算，若沒有特殊需求可以不用做這動作
    */

    // 有了記憶體空間後，我們要先給使用者提示，請他輸入數字
    printf("Please enter the first integer : ");
    // 再來要把使用者輸入的數字放到記憶體內
    scanf("%d", &number1); // 這個function一樣來自srdio.h，可以從鍵盤讀入資料，因為輸入的資料可以有很多種，所以需指定資料種類
    /*
        以此為例，第一個參數就是用來指定資料種類 %d 的 d 是指decimal，就是我們日常生活用的十進位數字
        再來第二個參數就是指定要存放的位置，也就是要儲存的記憶體位址
        我們只要把"取址運算子"也就是 & 這個符號放在變數前面，就可取得其記憶體空間的address
    */

    // 同第一個數字的作法，我們可以請使用者輸入第二個數字
    printf("Please enter the second integer : ");
    scanf("%d", &number2);

    sum = number1 + number2; // + 號就是我們一般的加法，要注意的是 「=」，在C語言中，= 代表的是asssign，是賦值的意思。相等的寫法留到之後條件判斷的章節再談

    // 最後我們要把結果回傳給使用者
    printf("Sum is %d\n", sum); 

    /*
    資料型別除了剛才用到的 int，還有short int、long int、float、double、char.....等
    其差異在於意涵的不同、原理不同、值範圍不同、精確度不同甚至有無正負號，請參照README.md
    實作上可用sizeof 查看確切資料大小
    */
    printf("int 資料大小:  %d \n", sizeof(sum));
    printf("強制型別轉換成 long int 資料大小:  %d \n", sizeof( (long int) sum ) ); // 在變數要使用前加上 (資料型別) 可做到強制型別轉換
}