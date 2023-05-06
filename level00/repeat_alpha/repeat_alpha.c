#include <unistd.h>

int char_is_letter(char c)
{
	if (c < 65)
		return (1);
	if (c > 90 && c < 97)
		return (1);
	if (c > 122)
		return (1);
	return (0);
}

void printletter(char c)
{
	int i;
	if (c >= 65 && c <= 90)
		i = c - 65;
	else
		i = c - 97;
	while (i-- >= 0)
		write(1, &c, 1);
}
int main(int argc, char **argv)
{
	int i;
	char *str;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	i = 0;
	str = argv[1];
	while (str[i])
	{
		if (char_is_letter(str[i]) == 0)
		{
			printletter(str[i]);
		}else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

