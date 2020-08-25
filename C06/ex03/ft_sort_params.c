/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eriling <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 10:57:23 by eriling           #+#    #+#             */
/*   Updated: 2020/08/11 14:03:34 by eriling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

char	**ft_sort(int ac, char **av)
{
	int		i;
	int		j;
	char	*swap;

	i = 1;
	j = 2;
	while (i < ac)
	{
		while (j < ac)
		{
			if (ft_strcmp(av[i], av[j]) > 0)
			{
				swap = av[i];
				av[i] = av[j];
				av[j] = swap;
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	return (av);
}

int		main(int ac, char **av)
{
	int		i;

	i = 1;
	if (ac > 1)
	{
		av = ft_sort(ac, av);
		while (i < ac)
		{
			ft_putstr(av[i]);
			i++;
		}
	}
	return (0);
}
