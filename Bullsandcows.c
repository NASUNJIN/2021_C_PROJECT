#include <stdio.h>
#include <stdlib.h> // ���� �Լ�(�������Ҷ� �ѹ��� ����)
#include <time.h> // ������ ������ (stdlib.h ����)

int main(void) 
{
	// ���� ���
	srand(time(NULL)); // 1�ʸ��� �������� ���� ����
	int answer = 0;
	int ang_arr[4] = { 0, 0, 0, 0 };

	for (int i = 0; i < 4; i++) 
	{
		ang_arr[i] = (rand() % 9) + 1; // (1~9) ���� �� ����

		for (int k = 0; k < i; k++) // �ߺ� �˻�
		{
			if (ang_arr[i] == ang_arr[k])
				i--;
		}
		
	}

	printf("Answer is "); 
	for (int i = 0; i < 4; i++) // ���� ���
		printf("%d", ang_arr[i]);

	// ���� ����
	int compare[4];
	int k = 0;

	// scanf ���
	/* for (int i = 0; i < 5; i++)
	{
		printf("\n���� �Է� : ");
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

