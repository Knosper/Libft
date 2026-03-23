#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*arr;

	arr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		*arr++ = 0;
		i++;
	}
}
