#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) 
{
	//���� ���
	srand(time(NULL)); //1�ʸ��� �������� ���� ����
	int answer = 0;
	int ang_arr[4] = { 0,0,0,0 };

	for (int i = 0; i < 4; i++)
	{
		ang_arr[i] = (rand() % 9) + 1; //1~9 ���� �� ����

		for (int k = 0; k < i; k++) //�ߺ� �˻�
		{
			if (ang_arr[i] == ang_arr[k])
				i--;
		}
	}

	printf("���� : ");
	for (int i = 0; i < 4; i++) //���� �ⷰ
		printf("%d", ang_arr[i]);

	int input = 0;
	int compare[4];
	for (int i = 0; i < 5; i++)
	{
		printf("\n\n[%d]ȸ\n", (i+1));
		printf("4�ڸ� ���� �Է� �Ͻÿ�. : ");
		scanf("%s", &input);
		
		int s = 0, b = 0;
		
		//���� ���
		for (int j = 4; j > 0; j--)
		{
			compare[4 - j] = (input % power(10, j)) / power(10, (j - 1));
			
			for (int k = 0; k < 4-j; k++) //�ߺ� �˻�
			{
				if (compare[4-j] == compare[k])
				{
					printf("\n�ߺ��� ���� �Դϴ�.");
					i--;
				}
			}
		}

		// ���� ��
		for (int a = 0; a < 4; a++) //����
		{
			for (int c = 0; c < 4; c++) //�Է��� ����
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
			printf("\n�¸�");
			break;
		}
		printf("S : %d, B : %d", s, b);
	}
	printf("\n�й�");

}

int power(int x, int y)
{
	if (y == 0) return 1;
	return x * power(x, y - 1);
}