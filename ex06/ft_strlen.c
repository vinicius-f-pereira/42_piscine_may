#include <unistd.h>

int	ft_strlen(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(*str)
	{
			len++;
			str++;

	}		
	ft_putchar(len + 48);
	return (len);
}
