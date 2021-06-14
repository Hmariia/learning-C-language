int ft_checkSquare(int **ar, int row, int col, int num)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (ar[i+row][j+col] == num)
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}