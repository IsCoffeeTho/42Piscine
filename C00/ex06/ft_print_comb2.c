#include<unistd.h>

void	ft_print_entry(int arr[2])
{
	char	num;

	num = (arr[0] / 10) + '0';
	write(1, &num, 1);
	num = (arr[0] % 10) + '0';
	write(1, &num, 1);
	write(1, " ", 1);
	num = (arr[1] / 10) + '0';
	write(1, &num, 1);
	num = (arr[1] % 10) + '0';
	write(1, &num, 1);
	if (arr[0] != 98)
		write(1, ", ", 2);
}

void	ft_ias(int *hb, int *he)
{
	(*hb)++;
	*he = (*hb) + 1;
}

void	ft_print_comb2(void)
{
	int	ij[2];

	ij[0] = 0;
	ij[1] = 0;
	while (ij[0] <= 98)
	{
		while (ij[1] <= 99)
		{
			ft_print_entry(ij);
			(ij[1])++;
		}
		ft_ias(&ij[0], &ij[1]);
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
