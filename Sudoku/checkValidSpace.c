#include "checkRow.c"
#include "checkCol.c"
#include "checkSquare.c"
int ft_checkValidSpace(int row, int col, int num, int **ar)
{
	if (ft_checkRow (ar, row, num) == 0)
	{
		if (ft_checkCol(ar, col, num) == 0)
		{
			if (ft_checkSquare(ar, row - (row % 3), col - col%3, num) == 0)
			{
				return (1);
			}
		}
	}
	return (0);
}