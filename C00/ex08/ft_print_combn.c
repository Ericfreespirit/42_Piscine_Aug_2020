/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eriling <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 10:43:07 by eriling           #+#    #+#             */
/*   Updated: 2020/08/05 08:42:48 by eriling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	display(int *tab, int n)
{
	int	i;

	i = 0;
	while (++i < n)
		if (tab[i - 1] >= tab[i])
			return ;
	i = -1;
	while (++i < n)
		ft_putchar(tab[i] + '0');
	if (tab[0] < (10 - n))
		write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	int	i;
	int	tab[10];

	if (n >= 1 && n <= 9)
	{
		i = -1;
		while (++i < n)
			tab[i] = i;
		while (tab[0] <= (10 - n))
		{
			display(tab, n);
			tab[n - 1]++;
			i = n;
			while (i > 0 && n > 1)
			{
				i--;
				if (tab[i] > 9)
				{
					tab[i - 1]++;
					tab[i] = 0;
				}
			}
		}
	}
}
