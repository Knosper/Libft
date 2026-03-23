#include "libft.h"

int	ft_ispath(char *path)
{
	int	fd;

	fd = open(path, O_RDONLY);
	if (fd >= 0)
		close(fd);
	else
		return (0);
	return (1);
}
