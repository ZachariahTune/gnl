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
	int		fd1;
	int		fd2;
	int		fd3;
	int		gnl_result;

	line = "Hello World";
	fd1 = open("test-files/text.txt", O_RDONLY);
	fd2 = open("test-files/numerics.txt", O_RDONLY);
	fd3 = open("test-files/text_nl.txt", O_RDONLY);
	//fd2 = 0;
	if (fd1 == -1){ft_putstr("Warning: Can not open file #1\n");}
	if (fd2 == -1){ft_putstr("Warning: Can not open file #2\n");}
	if (fd3 == -1){ft_putstr("Warning: Can not open file #2\n");}
	gnl_result = get_next_line(fd1, &line); ft_putstr("fd = "); ft_putnbr(fd1); ft_putstr("; result = "); ft_putnbr(gnl_result); ft_putstr("; line = "); ft_putstr(line); ft_putstr("\n");
	gnl_result = get_next_line(fd1, &line); ft_putstr("fd = "); ft_putnbr(fd1); ft_putstr("; result = "); ft_putnbr(gnl_result); ft_putstr("; line = "); ft_putstr(line); ft_putstr("\n");
	gnl_result = get_next_line(fd1, &line); ft_putstr("fd = "); ft_putnbr(fd1); ft_putstr("; result = "); ft_putnbr(gnl_result); ft_putstr("; line = "); ft_putstr(line); ft_putstr("\n");
	gnl_result = get_next_line(fd2, &line); ft_putstr("fd = "); ft_putnbr(fd2); ft_putstr("; result = "); ft_putnbr(gnl_result); ft_putstr("; line = "); ft_putstr(line); ft_putstr("\n");
	gnl_result = get_next_line(fd2, &line); ft_putstr("fd = "); ft_putnbr(fd2); ft_putstr("; result = "); ft_putnbr(gnl_result); ft_putstr("; line = "); ft_putstr(line); ft_putstr("\n");
	gnl_result = get_next_line(fd2, &line); ft_putstr("fd = "); ft_putnbr(fd2); ft_putstr("; result = "); ft_putnbr(gnl_result); ft_putstr("; line = "); ft_putstr(line); ft_putstr("\n");
	gnl_result = get_next_line(fd1, &line); ft_putstr("fd = "); ft_putnbr(fd1); ft_putstr("; result = "); ft_putnbr(gnl_result); ft_putstr("; line = "); ft_putstr(line); ft_putstr("\n");
	gnl_result = get_next_line(fd1, &line); ft_putstr("fd = "); ft_putnbr(fd1); ft_putstr("; result = "); ft_putnbr(gnl_result); ft_putstr("; line = "); ft_putstr(line); ft_putstr("\n");
	gnl_result = get_next_line(fd1, &line); ft_putstr("fd = "); ft_putnbr(fd1); ft_putstr("; result = "); ft_putnbr(gnl_result); ft_putstr("; line = "); ft_putstr(line); ft_putstr("\n");
	gnl_result = get_next_line(fd2, &line); ft_putstr("fd = "); ft_putnbr(fd2); ft_putstr("; result = "); ft_putnbr(gnl_result); ft_putstr("; line = "); ft_putstr(line); ft_putstr("\n");
	gnl_result = get_next_line(fd2, &line); ft_putstr("fd = "); ft_putnbr(fd2); ft_putstr("; result = "); ft_putnbr(gnl_result); ft_putstr("; line = "); ft_putstr(line); ft_putstr("\n");
	gnl_result = get_next_line(fd2, &line); ft_putstr("fd = "); ft_putnbr(fd2); ft_putstr("; result = "); ft_putnbr(gnl_result); ft_putstr("; line = "); ft_putstr(line); ft_putstr("\n");
	gnl_result = get_next_line(fd3, &line); ft_putstr("fd = "); ft_putnbr(fd3); ft_putstr("; result = "); ft_putnbr(gnl_result); ft_putstr("; line = "); ft_putstr(line); ft_putstr("\n");
	gnl_result = get_next_line(fd3, &line); ft_putstr("fd = "); ft_putnbr(fd3); ft_putstr("; result = "); ft_putnbr(gnl_result); ft_putstr("; line = "); ft_putstr(line); ft_putstr("\n");
	gnl_result = get_next_line(fd3, &line); ft_putstr("fd = "); ft_putnbr(fd3); ft_putstr("; result = "); ft_putnbr(gnl_result); ft_putstr("; line = "); ft_putstr(line); ft_putstr("\n");
	gnl_result = get_next_line(fd1, &line); ft_putstr("fd = "); ft_putnbr(fd1); ft_putstr("; result = "); ft_putnbr(gnl_result); ft_putstr("; line = "); ft_putstr(line); ft_putstr("\n");
	gnl_result = get_next_line(fd1, &line); ft_putstr("fd = "); ft_putnbr(fd1); ft_putstr("; result = "); ft_putnbr(gnl_result); ft_putstr("; line = "); ft_putstr(line); ft_putstr("\n");
	gnl_result = get_next_line(fd1, &line); ft_putstr("fd = "); ft_putnbr(fd1); ft_putstr("; result = "); ft_putnbr(gnl_result); ft_putstr("; line = "); ft_putstr(line); ft_putstr("\n");

	return (0);
}
