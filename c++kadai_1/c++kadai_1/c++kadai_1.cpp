// c++kadai_1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

// c++Study.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <stdlib.h>
#include <time.h>	
#include "disp.h"

using namespace std;


int main()
{
	int japanese;
	int math;
	int science;
	int social;
	int english;

	srand((unsigned int)time(NULL));


    japanese = (float)(rand() % 100 - 0) + 1;

	math = (float)(rand() % 100 - 0) + 1;

	science = (float)(rand() % 100 - 0) + 1;

	social = (float)(rand() % 100 - 0) + 1;

	english = (float)(rand() % 100 - 0) + 1;


	int x = japanese + math + science + social + english;
	float y = (float)x / 5.0f;

	printf("国: %d 点/英: %d 点/数: %d 点/理: %d 点/社: %d 点\n", japanese, english, math, science, social);

	printf("合計: %d点/平均: %.1f点\n",x,y);



	//平均点が６０点以下なら不合格。４０点が１教科でもあるなら不合格,
	if (japanese < 40 || math < 40 || science < 40 || social < 40 || english < 40 || y < 60)
	{
		if (japanese < 40) printf("国語が40点のため不合格\n");
		if (math < 40) printf("数学が40点のため不合格\n");
		if (science < 40) printf("理科が40点のため不合格\n");
		if (social < 40) printf("社会が40点のため不合格\n");
		if (english < 40) printf("英語が40点のため不合格\n");

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
