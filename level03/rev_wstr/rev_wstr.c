#include <stdlib.h>
#include <unistd.h>

int	word_count(char * str)
{
	int i;
	int space_counter;

	space_counter = 0;
	i = 1;
	while (str[i])
	{
		if (str[i]== ' ' || str[i] == 9)
			space_counter += 1;
		i++;
	}
	return (space_counter);
}

int	word_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != ' ' || str[i] != 9)
		i++;
	return (i);
}

char	*ft_substr(char *str, int start, int len)
{
	int 	i;
	char	*ret;

	i = 0;
	ret = malloc(len * sizeof(char));
	while (i < len)
	{
		ret[i] = str[start + i];
		i++;
	}
	return (ret);
}

char	**ft_split(char *str)
{
	char	**ret;
	int		w_count;
	int		w_len;
	int		i;
	int		k;

	i = 0;
	k = 0;
	w_count = word_count(str);
	ret = malloc(w_count * sizeof(char *));
	while(str[i])
	{
		if (str[i] != ' ' || str[i] != 9)
		{
			w_len = word_len(&str[i]);
			ret[k] = ft_substr(str, i, i + w_len);
		   	k++;	
			i += w_len;
		}
		else
			i++;
	}
	return (ret);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		w_count;
	char	*str_orig;
	char	**str_rev;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	str_orig = argv[1];
	w_count = word_count(str_orig);
	str_rev = ft_split(str_orig);
	while (w_count > 0)
	{
		ft_putstr(str_rev[w_count]);
		w_count--;
	}
	return (0);
}
