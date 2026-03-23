#include "libft.h"

void	ft_print_split(char **s)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i][j])
			j += write(1, &s[i][j], 1);
		write(1, " ", 1);
		j = 0;
		i++;
	}
}
