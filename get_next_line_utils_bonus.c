#include "get_next_line_bonus.h"

int	gnl_strchr_length(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			if (i > 0 && s[i - 1] == '\r')
			{
				s[i - 1] = '\0';
			}
			return (i);
		}
		i++;
	}
	if ((char)c == '\0')
		return (i);
	return (-1);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if ((dest == src) || n == 0)
	{
		return (dest);
	}
	if (dest == NULL && src == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*ret;
	size_t	slen;

	slen = ft_strlen(s);
	ret = malloc(sizeof(char) * (slen + 1));
	if (ret == NULL)
	{
		return (NULL);
	}
	ft_memcpy(ret, s, slen);
	ret[slen] = '\0';
	if (slen > 0 && ret[slen - 1] == '\r')
	{
		ret[slen - 1] = '\0';
	}
	return (ret);
}

char	*ft_strjoin_free(char **s1, const char *s2, int *before)
{
	char	*ret;
	size_t	slen[2];

	if (*s1 == NULL && s2 == NULL)
		return (ft_strdup(""));
	if (*s1 != NULL && s2 == NULL)
		return (ft_strdup(*s1));
	if (*s1 == NULL && s2 != NULL)
		return (ft_strdup(s2));
	slen[0] = ft_strlen(*s1);
	slen[1] = ft_strlen(s2);
	ret = malloc(sizeof(char) * (slen[0] + slen[1] + 1));
	if (ret == NULL)
	{
		*before = -2;
		free(*s1);
		*s1 = NULL;
		return (NULL);
	}
	ft_memcpy(ret, *s1, slen[0]);
	ft_memcpy(ret + slen[0], s2, slen[1]);
	ret[slen[0] + slen[1]] = '\0';
	free(*s1);
	*s1 = NULL;
	return (ret);
}
