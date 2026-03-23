#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest2;
	unsigned char	*src2;

	src2 = (unsigned char *)src;
	dest2 = (unsigned char *)dst;
	i = 0;
	while (i < n && (dst != NULL || src != NULL))
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dst);
}
