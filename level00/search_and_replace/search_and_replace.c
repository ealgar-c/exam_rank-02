#include <stdlib.h>
#include <unistd.h>

void	check_arguments(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 4 || av[2][1] || av[3][1])
	{
		write(1, "\n", 1);
		exit(EXIT_SUCCESS);
	}
}

int main(int ac, char **av)
{
	int		i;
	char	*str;

	check_arguments(ac, av);
	i = 0;
	str = av[1];
	while (str[i])
	{
		if (str[i] == av[2][0])
			write(1, &av[3][0], 1);
		else
			write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
