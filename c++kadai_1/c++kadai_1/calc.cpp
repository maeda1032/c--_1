
#include <iostream>
#include <stdio.h>
#include "calc.h"

using namespace std;

int main()
{
    int num1, num2;
    char op;
    bool loop = true;

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
            num1 = Kasan(num1,num2);
            break;
        case '-':
            num1 = Gensan(num1, num2);
            break;
        case '*':
            num1 = Jouzan(num1, num2);
            break;
        case '/':
            num1 = Josan(num1, num2);
            break;

        default:
            printf("不正な演算子です\n");
        }

        loop = LoopCheck(loop);
    }
    return 0;
}

int Kasan(int num1, int num2)
{
    printf("結果:%d\n", num1 + num2);
    num1 = num1 + num2;
    return num1;
}

int Gensan(int num1, int num2)
{
    printf("結果:%d\n", num1 - num2);
    num1 = num1 - num2;
    return num1;
}

int Jouzan(int num1, int num2)
{
    printf("結果:%d\n", num1 * num2);
    num1 = num1 * num2;
    return num1;
}

int Josan(int num1, int num2)
{
    if (num2 != 0) {
        printf("結果:%d\n", num1 / num2);
        num1 = num1 / num2;
        return num1;
    }
    else {
        printf("エラー0で除算はできません\n");
    }
}

bool LoopCheck(bool loop)
{
    char y;

    printf("継続するならyを終了するならそれ以外を押してください\n");
    scanf_s(" %c", &y, 1);

    if (y == 'y')
    {

    }
    else
    {
        loop = false;
    }

    return loop;
}

