#include <unistd.h>

int main(int argc, char **argv)
{
	int		i;
	char	*str;
	char	c;

	if (argc == 2)
	{
		i = 0;
		str = argv[1];
		while (str[i])
		{
			c = str[i];
			if (c >= 'a' && c <= 'm')
				c += 13;
			else if (c >= 'n' && c <= 'z')
				c -= 13;
			else if (c >= 'A' && c <= 'M')
				c +=13;
			else if (c >= 'N' && c <= 'Z')
				c -= 13;
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
