#include "get_next_line.h"

void	ft_putchar(char c){write(1, &c, 1);}
void	ft_putstr(char *str)
{
	int	i;
	if (str == NULL){ft_putstr("NULL");}
	if (str != NULL){i=0; while (str[i]){ft_putchar(str[i]); i++;}}
}
void	ft_putnbr(int n)
{
	if (n == -2147483648){ft_putstr("-2147483648"); return ;}
	if (n < 0 && n != -2147483648){ft_putchar('-'); ft_putnbr(-n);}
	else if (n > 9){ft_putnbr(n / 10); ft_putnbr(n % 10);}
	else{ft_putchar(n + '0');}
}

int main (void)
{
	char	*line;
	int		fd;
	int		gnl_result;

	line = "Hello World";
	fd = open("test-files/text.txt", O_RDONLY);
	//fd = 0; //For read from stdIN
	if (fd == -1){ft_putstr("Warning: Can not open file\n");}
	while ((gnl_result = get_next_line(fd, &line)) > 0)
	{
		ft_putstr("result = "); ft_putnbr(gnl_result); ft_putstr("; line = "); ft_putstr(line); ft_putstr("\n");
	}	ft_putstr("result = "); ft_putnbr(gnl_result); ft_putstr("; line = "); ft_putstr(line); ft_putstr("\n");

	return (0);
}
