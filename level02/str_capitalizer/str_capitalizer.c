#include <stdbool.h>
#include <unistd.h>

bool	isletter(char c)
{
	if (c >= 'a' && c <= 'z')
		return (true);
	else if (c >= 'A' && c <= 'Z')
		return (true);
	else
		return (false);
}

bool	ft_isspace(char c)
{
	if (c == ' ')
		return (true);
	else if (c >= 9 && c <= 13)
		return (true);
	else
		return (false);
}

void	first_letter(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	write(1, &c, 1);
}

void normal_letter(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int		i;
	int		a;
	char	*str;

	if (argc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	a = 1;
	while (argv[a])
	{
		i = 0;
		str = argv[a];
		while (str[i])
		{
			if (isletter(str[i]) && i == 0)
				first_letter(str[i]);
			else if (isletter(str[i]) && ft_isspace(str[i - 1]))
				first_letter(str[i]);
			else if (isletter(str[i]))
				normal_letter(str[i]);
			else
				write(1, &str[i], 1);
			i++;
		}
		write(1, "\n", 1);
		a++;
	}
	return (0);
}
