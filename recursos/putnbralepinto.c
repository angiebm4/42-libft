#include <stdlib.h>
#include <unistd.h>

void	ft_putnbr(int n)
{
	int flag = 1;
	if (n < 0)
	{
		flag = -1;
		write(1, "-", 1);
	}
	if (n <= -10 || n >= 10)
		ft_putnbr(n / 10);
	char c = (char)((n % 10)* flag) + '0';
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int n = atoi(av[1]);
		ft_putnbr(n);
	}
	return (0);
}