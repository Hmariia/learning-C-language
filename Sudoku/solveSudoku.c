#include "printSudoku.c"
#include "sort.c"
void ft_solveSudoku(int **ar)
{
	if (ft_sort(ar) == 1)
	{
		ft_printsudoku(ar);
	}
	else
		ft_putstr("Error\n");
}
