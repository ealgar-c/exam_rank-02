int	max(int *tab, unsigned int len)
{
	unsigned int i;
	int saved;

	i = 0;
	if (!tab[i])
		return (0);
	saved = tab[i];
	i++;
	while (i <= len)
	{
		if (tab[i] > saved)
			saved = tab[i];
		i++;
	}
	return (saved);
}

