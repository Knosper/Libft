#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst2;
	unsigned char	*src2;
	unsigned char	c2;

	i = 0;
	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	c2 = c;
	while (i < n && (dst || src))
	{
		dst2[i] = src2[i];
		if (src2[i] == c2)
		{
			return (dst + (i + 1));
		}
		i++;
	}
	return (NULL);
}
