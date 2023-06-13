#include <stdlib.h>

int	ft_strlen(char  *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*ret_str;

	len = ft_strlen(src);
	i = 0;
	ret_str = malloc((len + 1) * sizeof(char));
	if (!ret_str)
		return (NULL);
	ret_str[len + 1] = '\0';
	while (len-- >= 0)
		ret_str[len] = src[len];
	return (ret_str);
}
