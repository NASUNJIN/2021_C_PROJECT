#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) 
{
	//정답 출력
	srand(time(NULL)); //1초마다 랜덤으로 숫자 생성
	int answer = 0;
	int ang_arr[4] = { 0,0,0,0 };

	for (int i = 0; i < 4; i++)
	{
		ang_arr[i] = (rand() % 9) + 1; //1~9 랜덤 수 생성

		for (int k = 0; k < i; k++) //중복 검사
		{
			if (ang_arr[i] == ang_arr[k])
				i--;
		}
	}

	printf("정답 : ");
	for (int i = 0; i < 4; i++) //정답 출럭
		printf("%d", ang_arr[i]);

	int input = 0;
	int compare[4];
	for (int i = 0; i < 5; i++)
	{
		printf("\n\n[%d]회\n", (i+1));
		printf("4자리 수를 입력 하시오. : ");
		scanf("%s", &input);
		
		int s = 0, b = 0;
		
		//문제 덩어리
		for (int j = 4; j > 0; j--)
		{
			compare[4 - j] = (input % power(10, j)) / power(10, (j - 1));
			
			for (int k = 0; k < 4-j; k++) //중복 검사
			{
				if (compare[4-j] == compare[k])
				{
					printf("\n중복된 숫자 입니다.");
					i--;
				}
			}
		}

		// 숫자 비교
		for (int a = 0; a < 4; a++) //정답
		{
			for (int c = 0; c < 4; c++) //입력한 숫자
			{
				if (a == c)
				{
					if (ang_arr[a] == compare[c])
						s++;
				}
				else if (ang_arr[a] == compare[c])
					b++;
			}
		}

		if (s == 4)
		{
			printf("\n승리");
			break;
		}
		printf("S : %d, B : %d", s, b);
	}
	printf("\n패배");

}

int power(int x, int y)
{
	if (y == 0) return 1;
	return x * power(x, y - 1);
}