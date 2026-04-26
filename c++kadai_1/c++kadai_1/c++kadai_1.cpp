
#include <iostream>
#include <stdio.h>

using namespace std;

int main() 
{
    int num1,num2;
    char op;
    bool loop = true;
    char y;

    printf("数値１を入力してください:\n");
    scanf_s("%d", &num1);

    while (loop)
    {
        printf("数値２を入力してください:\n");
        scanf_s("%d", &num2);

        printf("演算子を入力してください (+, -, *, /):\n ");
        scanf_s(" %c", &op, 1);

        switch (op) {
        case '+':
            printf("結果:%d\n", num1 + num2);
            num1 = num1 + num2;
            break;
        case '-':
            printf("結果:%d\n", num1 - num2);
            num1 = num1 - num2;

            break;
        case '*':
            printf("結果:%d\n", num1 * num2);
            num1 = num1 * num2;

            break;
        case '/':
            if (num2 != 0) {
                printf("結果:%d\n", num1 / num2);
                num1 = num1 / num2;
            }
            else {
                printf("エラー0で除算はできません\n");
            }
            break;

        default: 
            printf("不正な演算子です\n");
        }

               printf("継続するならyを終了するならそれ以外を押してください\n");
               scanf_s(" %c", &y, 1);

               if (y == 'y')
               {

               }
               else
               {
                   loop = false;
               }
        }
        return 0;
}



