int ft_checkRow(int **ar, int col, int num)
{
	int row;
	
	row = 0;
	while (row < 9)
	{
		if (ar[row][col] == num)
        {
			return (1);
			row++;
		}
		else 
			row++;
	}
	return (0);
}
