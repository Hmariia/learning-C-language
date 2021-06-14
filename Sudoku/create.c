#include <stdlib.h>

int	**ft_create()
{
	int **ar;
	int i;
	int j;

	i = 0;
	j = 0;
	ar = malloc(9*sizeof(int*));
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ar[i] = malloc(81); 
			ar[i][j] = 0;
			j++;
		}
		i++;
	}
	return ar;
}
