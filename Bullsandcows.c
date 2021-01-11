#include <stdio.h>
#include <stdlib.h> // 랜덤 함수(컴파일할때 한번만 랜덤)
#include <time.h> // 완전한 랜덤성 (stdlib.h 보완)

int main(void) 
{
	// 정답 출력
	srand(time(NULL)); // 1초마다 랜덤으로 숫자 생성
	int answer = 0;
	int ang_arr[4] = { 0, 0, 0, 0 };

	for (int i = 0; i < 4; i++) 
	{
		ang_arr[i] = (rand() % 9) + 1; // (1~9) 랜덤 수 생성

		for (int k = 0; k < i; k++) // 중복 검사
		{
			if (ang_arr[i] == ang_arr[k])
				i--;
		}
		
	}

	printf("Answer is "); 
	for (int i = 0; i < 4; i++) // 정답 출력
		printf("%d", ang_arr[i]);

	// 숫자 생성
	int compare[4];
	int k = 0;

	// scanf 사용
	/* for (int i = 0; i < 5; i++)
	{
		printf("\n숫자 입력 : ");
		scanf("%d%d%d%d", &compare[0], &compare[1], &compare[2], &compare[3]);
		
			int s = 0, b = 0;
			for (int k = 0; k < 4; k++)
			{
				for (int i = 0; i < 4; i++)
				{
					if (i == k)
					{
						if (ang_arr[k] == compare[i])
							s++;
					}
					else if (ang_arr[k] == compare[i])
						b++;
				}
			}

			if (k == 4) {
				printf("WIN");
				break;
			}
			printf("S : %d, B : %d\n", s, b);
	} */


	
}

