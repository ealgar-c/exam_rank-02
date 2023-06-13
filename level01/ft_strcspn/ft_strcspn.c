#include <stdlib.h>

size_t	ft_strcspn(char *s, const char *reject)
{
	size_t	i;
	int		j;

	i = 0;
	while(s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				break ;
			j++;
		}
		if (reject[j])
			break ;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	printf("%lu\n", strcspn("hola","oke"));
	printf("%lu\n",ft_strcspn("hola", "oke"));
}*/
