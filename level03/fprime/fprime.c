#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

 void	fprime(unsigned int nb)
{
	unsigned int	prime;

	if (nb == 1)
		printf("1");
	else
	{
		prime = 2;
		while (nb > 1)
		{
			if (nb % prime == 0)
			{
				printf("%d", prime);
				nb /= prime;
				if (nb > 1)
					printf("*");
				prime--;
			}
			prime++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	nb;

	if (argc == 2)
	{
		nb = atoi(argv[1]);
		if (nb >= 0)
			fprime(nb);
	}
	printf("\n");
	return (0);
}
