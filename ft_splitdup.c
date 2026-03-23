#include "libft.h"

char	**ft_splitdup(char **s)
{
	char	**new;
	int		len;
	int		i;

	i = 0;
	if (!s || !s[0])
		return (NULL);
	len = ft_splitlen(s);
	new = malloc(sizeof(char *) * (len + 1));
	while (i < len && s[i])
	{
		new[i] = ft_strdup(s[i]);
		i++;
	}
	new[i] = NULL;
	return (new);
}
