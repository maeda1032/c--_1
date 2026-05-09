// c++kadai_1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

// c++Study.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>	

using namespace std;

int main()
{
	float japanese;
	float math;
	float science;
	float social;
	float english;

	srand(time(NULL));


    japanese = (float)(rand() % 100 - 0) + 1;

	math = (float)(rand() % 100 - 0) + 1;

	science = (float)(rand() % 100 - 0) + 1;

	social = (float)(rand() % 100 - 0) + 1;

	english = (float)(rand() % 100 - 0) + 1;


	float x = (float)japanese + (float)math + (float)science + (float)social + (float)english;
	float y = x / 5;

	printf("合計点は%.1fです\n",x);
	printf("平均点は%.1fです\n",y);

	//平均点が６０点以下なら不合格。４０点が１教科でもあるなら不合格,
	if (japanese < 40 || math < 40 || science < 40 || social < 40 || english < 40 || y < 60)
	{
		if (japanese < 40 || math < 40 || science < 40 || social < 40 || english < 40)
		{
			printf("４０点が１教科以上あるため不合格\n");
		}

		if (y <= 60)
		{
			printf("平均点が６０点以下のため不合格\n");
		}

	}
	//その二つの条件に当てはまらないなら合格
	else if (y >= 60)
	{
		printf("合格\n");
	}
	return 0;
}
