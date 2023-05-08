#include <unistd.h>

int main(int argc, char **argv)
{
	char *haystack;
	char *needle;
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	haystack = argv[2];
	needle = argv[1];
	while (haystack[i])
	{
		if (haystack[i] == needle[j])
			j++;
		i++;
	}
	if (needle[j] == '\0')
		write(1, "1\n", 2);
	else
		write(1, "0\n", 2);
	return (0);
}
