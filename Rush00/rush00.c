/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eriling <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 12:16:01 by eriling           #+#    #+#             */
/*   Updated: 2020/08/08 16:57:30 by eriling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	start(long long x)
{
	if (x > 0)
	{
		ft_putchar('o');
		x--;
	}
	while (x > 1)
	{
		ft_putchar('-');
		x--;
	}
	while (x > 0)
	{
		ft_putchar('o');
		x--;
	}
	ft_putchar('\n');
}

void	middle(long long line, long long x)
{
	long long	save;

	save = x;
	while (line--)
	{
		if (x > 0)
		{
			ft_putchar('|');
			x--;
		}
		while (x > 1)
		{
			ft_putchar(' ');
			x--;
		}
		while (x > 0)
		{
			ft_putchar('|');
			x--;
		}
		ft_putchar('\n');
		x = save;
	}
}

void	rush(long long x, long long y)
{
	if (y > 0 && x > 0)
	{
		start(x);
		y--;
	}
	if (y > 1 && x > 0)
	{
		middle(y - 1, x);
		y = 1;
	}
	if (y == 1 && x > 0)
		start(x);
}
