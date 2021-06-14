#include "putstr.c"

void ft_printsudoku(int **ar)
{
	int row;
	int col;

	row = 0;
	col = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			ft_putchar(' ');
			ft_putchar(ar[row][col] + '0');
			col++;
		}
		putchar('\n');
		row++;
	}	
}