#include "libft.h"

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = -1;
	j = 0;
	if (!s1)
	{
		s1 = (char *)malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[++i] != '\0')
		str[i] = s1[i];
	while (s2[j] != '\0')
		str[i++] = s2[j++];
	str[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (str);
}

char    *del_line(char *s)
{
    int     i;
    int     j;
    char    *new;

    j = 0;
    i = 0;
    while (s[i] && s[i] != '\n')
        i++;
    if (!s[i])
    {
        free(s);
        return (NULL);
    }
    new = malloc(sizeof(char) * (ft_strlen(s) - i));
    i++;
    while (s[i])
        new[j++] = s[i++];
    new[j] = '\0';
    free(s);
    return (new);
}

char    *get_line(char *s)
{
    int     i;
    int     j;
    char    *line;

    j = 0;
    i = 0;
    while (s[i] && s[i] != '\n')
        i++;
    line = malloc(sizeof(char) * (i + 1));
    if (!line)
        return (NULL);
    while (j < i && s[j] != '\0')
    {
        line[j] = s[j];
        j++;
    }
    line[j] = '\0';
    return (line);
}

char    *read_buff(int fd, char *save)
{
    char    *buf;
    int     count;

    buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if (!buf)
    {
        write(1, "buf malloc error\n", 17);
        return (NULL);
    }
    count = 1;
    while (!ft_has_nl(save) && count != 0)
    {
        count = read(fd, buf, BUFFER_SIZE);
        if (count == -1)
        {
            free(save);
            free(buf);
            return (NULL);
        }
        buf[count] = '\0';
        save = ft_strjoin_gnl(save, buf);
    }
    free(buf);
    return (save);
}

char    *get_next_line(int fd)
{
    char        *line;
    static char *save;

    line = NULL;
    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    save = read_buff(fd, save);
    if (!save)
        return (NULL);
    line = get_line(save);
    save = del_line(save);
    return (line);
}

/*
int main()
{
    int fd;

    fd = open("file1.fdf", O_RDONLY);
    char *save = get_next_line(fd);
    printf("save = %s\n", save);
    free(save);
    save = get_next_line(fd);
    printf("save = %s\n", save);
    free(save);
    save = get_next_line(fd);
    printf("save = %s\n", save);
    free(save);
    save = get_next_line(fd);
    printf("save = %s\n", save);
    free(save);
    save = get_next_line(fd);
    printf("save = %s\n", save);
    free(save);
    save = get_next_line(fd);
    printf("save = %s\n", save);
    free(save);
    save = get_next_line(fd);
    printf("save = %s\n", save);
    free(save);
    save = get_next_line(fd);
    printf("save = %s\n", save);
    free(save);
    save = get_next_line(fd);
    printf("save = %s\n", save);
    free(save);
    save = get_next_line(fd);
    printf("save = %s\n", save);
    free(save);
    save = get_next_line(fd);
    printf("save = %s\n", save);
    free(save);
    save = get_next_line(fd);
    printf("save = %s\n", save);
    free(save);
    return (0);
}*/
