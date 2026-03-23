#include "libft.h"

int	ft_linelen(int fd2)
{
	char	*line;
	int		i;

	i = 0;
	line = get_next_line(fd2, 0);
	if (!line)
		return (-1);
	else
		i++;
	while (line)
	{
		free(line);
		line = get_next_line(fd2, 0);
		if (line == NULL)
		{
			if (i > 1)
				i--;
			break ;
		}
		i++;
	}
	if (line)
		free(line);
	return (i);
}
