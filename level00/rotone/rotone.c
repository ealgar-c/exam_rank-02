#include <unistd.h>

void print_mayus(char c)
{
	if (c == 'Z')
		write(1, "A", 1);
	else
	{
		c += 1;
		write(1, &c, 1);
	}
}

void print_minus(char c)
{
	if (c == 'z')
		write(1, "a", 1);
	else
	{
		c += 1;
		write(1, &c, 1);
	}
}

int main(int argc, char **argv)
{
	int		i;
	char	*str;
	char	c;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	str = argv[1];
	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c>='A' && c <= 'Z')
			print_mayus(c);
		else if (c>='a' && c <= 'z')
			print_minus(c);
		else
			write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

