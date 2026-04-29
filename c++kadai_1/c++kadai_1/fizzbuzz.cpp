
#include <stdio.h>
#include <iostream>

using namespace std;

int fizz = 3;
int buzz = 5;

void NumberDisplay(int minX, int maxX)
{
	

	if (minX > 1 && maxX < 1000 && minX < maxX)
	{
		//もし倍数がそれ以下やったときの保険
		if (fizz <= minX)
		{
			fizz += 3;
		}
		else if (buzz <= minX)
		{
			buzz += 5;
		}
		//以下FizzBuzzの処理
		else if (fizz == minX && buzz == minX)
		{
			printf("FizzBuzz\n");
			fizz += 3;
			buzz += 5;
		}
		else if (fizz == minX)
		{
			printf("Fizz\n");

			fizz += 3;

			printf("%d\n",fizz);
		}
		else if (buzz == minX)
		{
			printf("Buzz\n");

			buzz += 5;

		}
		else
		{
			printf("%d\n", minX);
		}
	}
}

void RangeCheck(int minX, int maxX)
{
	if (minX < 1 || maxX > 1000)
	{
		printf("1未満または１０００以上の数値が入力されました。\n");
	}

	if (minX > maxX)
	{
		printf("開始値が終了値より高い値で設定されました。\n");
	}
}

void Loop(int minX,int maxX)
{

	for (minX; minX < maxX; minX++)
	{
		NumberDisplay(minX,maxX);
	}
}

int main()
{
	int minX, maxX;
	scanf_s("%d", &minX);
	scanf_s("%d", &maxX);

	Loop(minX, maxX);

	RangeCheck(minX, maxX);

}
