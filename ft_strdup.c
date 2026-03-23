#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	i;
	size_t	size;
	char	*arr;

	size = ft_strlen(src);
	arr = (char *)malloc(sizeof(char) * (size + 1));
	i = 0;
	if (!arr)
	{
		return (NULL);
	}
	while (src[i])
	{
		arr[i] = src[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
