int ft_atoi(const char *str)
{
	int i;
	int sign;
	int acum;

	acum = 0;
	sign = 1;
	i = 0;
	while (str[i]==' ' || (str[i]>=9 && str[i]<=13))
		i++;
	if (str[i]=='-')
		sign *= -1;
	if (str[i]=='-' || str[i]=='+')
		i++;
	while (str[i]>='0' && str[i]<='9')
	{
		acum = (acum * 10) + (str[i]-'0');
		i++;
	}
	return (acum * sign);
}

