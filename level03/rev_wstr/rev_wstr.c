#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_word_length(char *str, int i)
{
	int	w_l;

	w_l = 0;
	while (str[i] > 32 && str[i] != '\0')
	{
		w_l++;
		i--;
	}
	return (w_l);
}

int main(int ac, char **av)
{
	int		i;
	char	*str;
	int		w_l;
	int		w_start;
	int		w_sc;

	if (ac == 2)
	{
		str = av[1];
		i = ft_strlen(str) - 1;
		while (i >= 0)
		{
			w_l = get_word_length(str, i);
			w_start = i - w_l;
			w_sc = w_start;
			while (w_start <= i)
			{
				if (str[w_start] != '\0' && str[w_start] != ' ')
					write(1, &str[w_start], 1);
				w_start++;
			}
			i = w_sc;
			if (str[i] == ' ')
			{
				write(1, " ", 1);
				i--;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
