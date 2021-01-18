#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int mine[100][100];

int main(void) 
{
	srand(time(0));
	int row, col;
	int bomb;
	printf("가로, 세로, 지뢰개수입력 : ");
	scanf("%d %d %d", &row, &col, &bomb);

	for (int i = 1; i <= bomb; i++)
	{
		int a = rand() % row + 1;
		int b = rand() % col + 1;
		if (mine[a][b] == -1) i--;
		else(mine[a][b] = *);
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%2d", mine[i][j]);
		}
		printf("\n");
	}
	return 0;
}