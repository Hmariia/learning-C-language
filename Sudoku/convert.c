#include "create.c"
int **ft_convert(char str[10][10])
{
	int **ar = ft_create();
	int i;
	int j;
	int n;

	i = 0;
	j = 0;
	n = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9 && n >= 0)
		{
			n = str[i][j];
			if (n == 46)
			{
				ar[i][j] = 0;
			}
			else if (n > 48 && n < 58)
			{
				ar[i][j] = n - 48;
			}
			else 
				n = -1;
			j++;
		}
		i++;
	}
	
	return (ar);
}