#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	slen;

	slen = ft_strlen(s);
	if ((char) c == '\0')
		return ((char *) s + slen);
	while (slen--)
	{
		if (*(s + slen) == (char) c)
			return ((char *) s + slen);
	}
	return (0);
}
