// 4. 運算元、運算子、表示式
// 改寫 2 的範例：兩數字相加程式

#include <stdio.h>

int main() {
    int n, sum=0;

    printf("Please enter the first integer : ");
    scanf("%d", &n); 
    sum += n; // 每接收到一個使用者的輸入就+回sum

    printf("Please enter the second integer : "); // 新的數字要進來時可重複利用n
    scanf("%d", &n);
    sum += n;

    printf("Sum is %d\n", sum); 

    printf("Sum+1 is %d\n", sum++); 

    printf("Reset sum as 5\n");
    sum = 5;
    printf("sum: %d\n", sum);   // 5
    printf("++sum: %d\n", ++sum); // 6
    printf("sum: %d\n", sum);   // 6

    printf("Reset sum as 5\n");
    sum = 5;
    printf("sum: %d\n", sum);   // 5
    printf("sum++: %d\n", sum++); // 5
    printf("sum: %d\n", sum);   // 6
}