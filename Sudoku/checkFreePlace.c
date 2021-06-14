int ft_checkFreePlace (int **ar)
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
			if (ar[row][col] == 0)
			{
				return (1);
			}
			col++;
		}
		row++;
	}
	return (0);
}