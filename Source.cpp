#include <stdio.h>
#include <locale.h>
#include <math.h>
#define ROW 9
#define COL 9
void main()
{
	setlocale(LC_ALL, "Rus");
	int row, col;
	printf("\n");
	for (row = 1; row <= ROW; row++)
	{
		for (col = 1; col <= row; col++)
			printf("%5d", col * row);
		printf("\n");
	}

	int a = 1, b = 1;
	printf("\n");
	for (; b <= 4; b++)
	{
		for (; a <= 10; a++)
			printf("%5d", a);
		printf("\n");
		a = 1;
	}
}



	