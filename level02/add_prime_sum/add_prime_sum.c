#include <stdbool.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int acum;

	i = 0;
	sign = 1;
	acum = 0;
	if (str[0] == '-')
	{
		sign *= (-1);
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		acum = (acum * 10) + (str[i] - '0');
		i++;
	}
	return (acum * sign);
}

bool	ft_isprime(int	nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (false);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (false);
		i++;
	}
	return (true);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int	i;
	int	acum;
	int	argument;

	if (ac != 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	argument = ft_atoi(av[1]);
	if (argument < 0)
	{
		write(1, "0\n",2);
		return (0);
	}
	i = 0;
	acum = 0;
	while (i <= argument)
	{
		if (ft_isprime(i))
			acum += i;
		i++;
	}
	ft_putnbr(acum);
	write(1, "\n", 1);
	return (0);
}
