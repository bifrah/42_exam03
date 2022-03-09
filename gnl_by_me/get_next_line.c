#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	stock[10000];
	char	buf[1];
	char	*line;
	int	i;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	i = 0;
	stock[i] = '\0';
	while (read(fd, buf, 1) == 1)
	{
		stock[i] = buf[0];
		stock[i + 1] = '\0';
		if (stock[i] == '\n')
			break ;
		i++;
	}
	line = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (stock[i])
	{
		line[i] = stock[i];
		i++;
	}
	line[i] = '\0';
	if (line[0] == '\0')
		return (NULL);
	return (line);
}

