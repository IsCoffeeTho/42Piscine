void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		c = tab[i];
		tab[i] = tab[j];
		tab[j] = c;
		i++;
		j--;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int arr[5] = {1,2,3,4,5};
	
	printf("%d\n", arr[0]);
	ft_rev_int_tab(arr, 5);
	printf("%d", arr[0]);
}
*/
