

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int minX, maxX;
	scanf_s("%d", &minX);
	scanf_s("%d", &maxX);

	int fizz = 3;
	int buzz = 5;

	if (minX > 1 && maxX < 1000 && minX < maxX)
	{
		for (minX; minX < maxX; minX++)
		{
			if (fizz == minX && buzz == minX)
			{
				printf("FizzBuzz\n");
				fizz += 3;
				buzz += 5;
			}
			else if (fizz == minX)
			{
				printf("Fizz\n");

				fizz += 3;

			}
			else if (buzz == minX)
			{
				printf("Buzz\n");

				buzz += 5;

			}
			else
			{
				printf("%d\n",minX);
			}
		}
	}

	if (minX < 1 || maxX > 1000)
	{
		printf("1未満または１０００以上の数値が入力されました。\n");
	}

	if (minX > maxX)
	{
		printf("開始値が終了値より高い値で設定されました。\n");
	}



}
