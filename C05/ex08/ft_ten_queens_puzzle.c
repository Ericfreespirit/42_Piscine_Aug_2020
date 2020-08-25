/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eriling <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 15:59:43 by eriling           #+#    #+#             */
/*   Updated: 2020/08/12 18:26:22 by eriling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		diff(int x, int y)
{
	if (x >= y)
		return (x - y);
	else
		return (y - x);
}

int		check(int num_reine, int *tab)
{
	int i;

	i = 0;
	while (i < num_reine)
	{
		if (tab[num_reine] == tab[i]
			|| diff(tab[num_reine], tab[i]) == (num_reine - i))
			return (0);
		i++;
	}
	return (1);
}

void	display(int *tab)
{
	int		i;
	char	a;

	i = 0;
	while (i <= 9)
	{
		a = tab[i++] + 48;
		write(1, &a, 1);
	}
}

void	backtrack(int num_reine, int *count, int *tab)
{
	tab[num_reine] = 0;
	while (tab[num_reine] <= 9)
	{
		if (check(num_reine, tab) == 1)
		{
			if (num_reine == 9)
			{
				display(tab);
				write(1, "\n", 1);
				(*count)++;
			}
			else
				backtrack(num_reine + 1, count, tab);
		}
		tab[num_reine]++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	int num_reine;
	int tab[10];
	int count;

	num_reine = 0;
	count = 0;
	backtrack(num_reine, &count, tab);
	return (count);
}
