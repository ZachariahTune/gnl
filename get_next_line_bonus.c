#include "get_next_line_bonus.h"

static int	gnl_after(char **after0, char **after1, char **line, int before)
{
	*line = NULL;
	if (*after0 == NULL)
		return (before);
	if (*after1 == NULL)
		*after1 = *after0;
	before = gnl_strchr_length(*after1, '\n');
	if (before >= 0)
	{
		(*after1)[before] = '\0';
		*line = ft_strdup(*after1);
		*after1 += (before + 1);
	}
	if (before == -1)
	{
		*line = ft_strdup(*after1);
		*after1 = NULL;
	}
	if (before == -1 || *line == NULL)
	{
		free(*after0);
		*after0 = NULL;
	}
	if (*line == NULL)
		return (-2);
	return (before);
}

static int	gnl_prestart(int fd, char **buf, int *bytes, char **line)
{
	if (fd < 0 || BUFFER_SIZE <= 0 || line == NULL)
	{
		return (-1);
	}
	*buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (*buf == NULL)
	{
		return (-1);
	}
	*bytes = 1;
	return (1);
}

static int	gnl_return(int bytes, char *line, int before, char *after)
{
	if (bytes == -1 || (bytes > 0 && !line) || (before >= 0 && !after))
	{
		return (-1);
	}
	if (bytes == 0)
	{
		return (0);
	}
	return (1);
}

static int	get_next_line_2(int fd, char **line, char **after0, char **after1)
{
	char		*buf;
	int			bytes;
	int			before;

	if (gnl_prestart(fd, &buf, &bytes, line) == -1)
		return (-1);
	before = gnl_after(after0, after1, line, -1);
	while (before == -1 && bytes > 0)
	{
		bytes = read(fd, buf, BUFFER_SIZE);
		if (bytes != -1)
		{
			buf[bytes] = '\0';
			before = gnl_strchr_length(buf, '\n');
			if (before >= 0)
			{
				buf[before] = '\0';
				*after0 = ft_strdup(&buf[before + 1]);
			}
			*line = ft_strjoin_free(line, buf, &before);
		}
	}
	free(buf);
	return (gnl_return(bytes, *line, before, *after0));
}

int	get_next_line(int fd, char **line)
{
	static char	*fd_array[2][5000];

	return (get_next_line_2(fd, line, &fd_array[0][fd], &fd_array[1][fd]));
}
