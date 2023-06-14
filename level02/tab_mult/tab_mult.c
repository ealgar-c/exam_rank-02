#include <unistd.h>

int ft_atoi(char *str)
{
	int	i;
	int	acum;

	i = 0;
	acum = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		acum = (acum * 10) + (str[i] - '0');
		i++;
	}
	return (acum);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int		i;
	int		nb;
	char	c;
	if (ac == 2)
	{
		nb = ft_atoi(av[1]);
		i = 0;
		while (++i <= 9)
		{
			c = i + '0';
			write(1, &c, 1);
			write(1, " x ", 3);
			ft_putnbr(nb);
			write(1, " = ", 3);
			ft_putnbr(i * nb);
			if (i < 9)
				write(1, "\n", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
