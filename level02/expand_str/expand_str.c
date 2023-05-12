#include <unistd.h>

int main(int argc, char **argv)
{
	char	*str_orig;
	char	*str_fixed;
	int		i;
	int		j;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	str_orig = argv[1];
	i = 0;
	j = 0;
	while (str_orig[i])
	{
		while ((str_orig[i] == ' '|| str_orig[i] == 9) && (str_orig[i + 1] == ' '|| str_orig[i + 1] == 9))
			i++;
		 str_fixed[j] = str_orig[i];
		 j++;
		 i++;
	}
	i = 0;
	while (str_fixed[i])
	{
		if (str_fixed[i] == ' '|| str_fixed[i] == 9)
			write(1, "   ", 3);
		else
			write(1, &str_fixed[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}