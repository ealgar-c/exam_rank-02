#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*str;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	 i = 0;
	 str = argv[1];
	 while (str[i] == ' ' || (str[i]>= 9 && str[i]<= 13))
		 i++;
	 while ((!(str[i] == ' ' || (str[i]>= 9 && str[i]<= 13))) && str[i])
		 write (1, &str[i++], 1);
	 write(1, "\n", 1);
	 return (0);
}
