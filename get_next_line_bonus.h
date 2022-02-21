#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

int		gnl_strchr_length(char *s, int c);
size_t	ft_strlen(const char *str);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strdup(const char *s);
char	*ft_strjoin_free(char **s1, const char *s2, int *before);
int		get_next_line(int fd, char **line);

#endif