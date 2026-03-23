#include "libft.h"

int		ft_has_set(const char *s, const char *set)
{
	size_t i;
	size_t j;

	i = 0;
	if (!s || !set)
		return (0);
	while (s[i])
	{
		j = 0;
		while (set[j])
		{
			if (s[i] == set[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
