#include <unistd.h>

int main(int ac, char **av)
{
	int		i;
	char	*str;
	char	c;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	str = av[1];
	while (str[i])
	{
		if (str[i] >= 'A' && str[i]<= 'Z')
		{
			write(1, "_", 1);
			c = str[i] + 32;
			write(1, &c, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
