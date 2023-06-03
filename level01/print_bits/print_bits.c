#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned char	tmp;
	int	i;

	i = 7;
	while (i >= 0)
	{
		tmp = octet >> i;
		if (tmp % 2 == 0)
			write(1, "0", 1);
		else
			write(1, "1", 1);
		i--;
	}
}
