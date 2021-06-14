int ft_checkCol(int **ar, int row, int num)
{
	int col;

	col = 0;
	while (col < 9)
	{
		if (ar[row][col] == num)
		{
			return (1);
		}
		col++;
	}
	return (0);
}
