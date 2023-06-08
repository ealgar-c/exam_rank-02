#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

bool	ft_separator(char c)
{
	if (c == ' ')
		return (true);
	else if (c >= 9 && c <= 13)
		return (true);
	else
		return (false);
}

int	ft_wordlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && !ft_separator(str[i]))
		++i;
	return (i);
}

char	*wordup(char *str)
{
	int		i;
	int		len;
	char	*word;

	len = ft_wordlen(str);
	i = 0;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	word[len] = '\0';
	while (i < len)
	{
		word[i] = str[i];
		++i;
	}
	return (word);
}

void	fill_words(char **array, char *str)
{
	int	word_index;

	word_index = 0;
	while (ft_separator(*str))
		++str;
	while (*str != '\0')
	{
		array[word_index] = wordup(str);
		++word_index;
		while (*str != '\0' && !ft_separator(*str))
			++str;
		while (ft_separator(*str))
			++str;
	}
}

int	count_words(char *str)
{
	int	num_words;

	num_words = 0;
	while (ft_separator(*str))
		++str;
	while (*str != '\0')
	{
		++num_words;
		while (*str != '\0' && !ft_separator(*str))
			++str;
		while (ft_separator(*str))
			++str;
	}
	return (num_words);
}

char	**ft_split(char *str)
{
	int		num_words;
	char	**array;

	num_words = count_words(str);
	array = malloc(sizeof(char *) * (num_words + 1));
	array[num_words] = 0;
	fill_words(array, str);
	return (array);
}
