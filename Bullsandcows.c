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
	int input = 0;
	int compare[4];
	int k = 0;

	printf("\n"); // �� ����

	for (int i = 0; i < 5; i++)
	{
		scanf("%d%d%d%d", &compare[0], &compare[1], &compare[2], &compare[3]);
		for (int i = 0; i < 4; i++)
			printf("%d", compare[i]);
		printf("\n");
		for (int i = 0; i < 4; i++)
		{
			if (ang_arr[i] == compare[i])
				k++;
		}
		printf("S : %d", k);
	}
	
	
	
}

