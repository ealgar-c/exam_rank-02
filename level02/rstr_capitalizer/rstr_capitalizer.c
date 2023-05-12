int main(int argc, char **argv)
{
	int	c_arg;
	int i;
	char *str;
	if (argc == 1)
	{
		write (1, "\n", 1);
		return (0);
	}
	argc--;
	while (c_arg < argc)
	{
		str = argv[argc];
		i = 0;
		while(str[i])
		{
			// no me apetece
		}
	}
}
