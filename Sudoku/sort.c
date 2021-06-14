#include "checkFreePlace.c"
#include "checkValidSpace.c"

int		ft_sort(int **ar)
{
	int row;
	int col;
	int num;

	row = 0;
	col = 0;
	num = 0;
	if (ft_checkFreePlace(ar) == 0)
	{
		return (1);
	}
	while (num <= 9)
	{
		if (ft_checkValidSpace(row, col, num, ar) == 1)
		{
			ar[row][col] = num;
			if (ft_sort(ar) == 1)
			{
				return (1);
			}
			ar[row][col] = 0;
		}
	}
	return (0);
}
