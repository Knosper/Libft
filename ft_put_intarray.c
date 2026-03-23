#include "libft.h"

void	ft_put_intarray(int *array, int len)
{
	int	i;

	i = 0;
	write(1, "int array = \n", 14);
	while (i < len)
	{
		ft_putnbr_fd(array[i++], 1);
		write(1, "\n", 1);
	}
}
