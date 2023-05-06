#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (0);
}

int main(int argc, char **argv)
{
	char *str;
	int i;
	int j;

	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	j = 0;
	str = argv[1];
	i = ft_strlen(str);
	while (str[i] == 32 || str[i] == 9)
		i--;
	while (str[i] > 32 && str[i] < 127)
	{
		i--;
		j++;
	}
	while (j > 0)
	{
		write(1, &str[i], 1);
		i++;
		j--;
	}
	write(1, "\n", 1);
	return (0);
	}
