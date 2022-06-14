int	ft_sqrt(int nb)
{
	int	i;
	int	sqrt;

	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
	i = 0;
	sqrt = 0;
	while (sqrt < nb && i <= 46341)
	{
		i++;
		sqrt = i * i;
	}
	if (sqrt == nb)
		return (i);
	else
		return (0);
}
