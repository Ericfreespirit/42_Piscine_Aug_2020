#include <stdio.h>
int		ft_atoi_base(char *str, char *base);

int		main(int ac, char **av)
{
	printf("%d", ft_atoi_base(av[1], av[2]));
	return (0);
}
