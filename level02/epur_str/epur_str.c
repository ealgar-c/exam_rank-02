#include <stdbool.h>
#include <unistd.h>

int	ws_count(char *str, int i)
{
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	return (i);
}

int	ft_wordlen(char *str)
{
	int i;

	i = 0;
	while(str[i] && str[i] != ' ' && str[i] != '\t')
		i++;
	return (i);
}
void	epur_str(char *str)
{
	int		i;
	bool	fw;
	int		w_len;

	i = ws_count(str, 0);;
	fw = true;
	while(str[i])
	{
		if (!fw)
			write(1, " ", 1);
		w_len = ft_wordlen(str + i);
		write(1, str + i, w_len);
		fw = false;
		i = ws_count(str, i + w_len);
	}
	
}

int	main(int ac, char **av)
{
	if (ac == 2)
		epur_str(av[1]);
	write(1, "\n", 1);
	return (0);
}
