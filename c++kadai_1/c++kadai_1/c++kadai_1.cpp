

#include <stdio.h>
#include <iostream>

using namespace std;

int keisan( int kouka, int syojikin, int waru)
{
	int x;
	x = syojikin / waru;
	kouka = x;
	return kouka;
}

int currentKouka(int b, int syojikin, int waru)
{
	b = syojikin % waru;

	return b;
}

//0枚の硬貨は無視するようにする
void ZeroCheck(int kouka ,int enn)
{
	if (enn != 0)
	{
		printf("%d円, % d枚\n", kouka,enn);
	}

}

int main()
{
	int a = 0;

	int kouka1 = 0;
	int kouka5 = 0;
	int kouka10 = 0;
	int kouka50 = 0;
	int kouka100 = 0;
	int kouka500 = 0;

	char y;

	bool loop = true;
	
	//÷と%で枚数を計算
	int b = 0;
	int c = 0;
	int d = 0;

	while (true)
	{
		//両替カウントの追加
		c++;
		//入力の処理
		printf("金額を入力してください\n");
		scanf_s("%d", &a);

		//dに合計金額を記憶させる
		d += a;
		while(loop)
		{
				if (500 <= a)
				{
					kouka500 += keisan(kouka500, a, 500);

					a = currentKouka(b, a, 500);
				}
				else if (100 <= a || 100 <= b)
				{
					kouka100 += keisan(kouka100, a, 100);

					a = currentKouka(b, a, 100);
				}
				else if (50 <= a || 50 <= b)
				{
					kouka50 += keisan(kouka50, a, 50);

					a = currentKouka(b, a, 50);
				}
				else if (10 <= a || 10 <= b)
				{
					kouka10 += keisan(kouka10, a, 10);

					a = currentKouka(b, a, 10);
				}
				else if (5 <= a || 5 <= b)
				{
					kouka5 += keisan(kouka5, a, 5);

					a = currentKouka(b, a, 5);
				}
				else if (1 <= a || 1 <= b)
				{
					kouka1 += keisan(kouka1, a, 1);

					a = currentKouka(b, a, 1);
				}
				else if (a == 0 || b == 0)
				{
					loop = false;
				}

		}
			//yで継続それ以外で終了
			printf("継続するならｙを終了するならそれ以外を入力してください。");
			scanf_s(" %c", &y, 1);
			if (y == 'y')
			{

			}
			else
			{
				break;
			}
	}

	printf("ただ今の両替結果は以下の通りです\n");
	ZeroCheck(500, kouka500);
	ZeroCheck(100, kouka100);
	ZeroCheck(50, kouka50);
	ZeroCheck(10, kouka10);
	ZeroCheck(5, kouka5);
	ZeroCheck(1, kouka1);

	//終了したなら合計両替回数と合計金額を表示
	printf("合計両替回数は%d回です\n", c);
	printf("合計金額は%d円です\n",d);

	return 0;
}


