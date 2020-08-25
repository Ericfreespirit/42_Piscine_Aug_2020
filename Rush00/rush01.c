/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xchalle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 14:00:52 by xchalle           #+#    #+#             */
/*   Updated: 2020/08/09 14:43:38 by xchalle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	start(long long x)
{
	if (x > 0)
	{
		ft_putchar('/');
		x--;
	}
	while (x > 1)
	{
		ft_putchar('*');
		x--;
	}
	while (x > 0)
	{
		ft_putchar('\\');
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
			ft_putchar('*');
			x--;
		}
		while (x > 1)
		{
			ft_putchar(' ');
			x--;
		}
		while (x > 0)
		{
			ft_putchar('*');
			x--;
		}
		ft_putchar('\n');
		x = save;
	}
}

void	end(long long x)
{
	if (x > 0)
	{
		ft_putchar('\\');
		x--;
	}
	while (x > 1)
	{
		ft_putchar('*');
		x--;
	}
	while (x > 0)
	{
		ft_putchar('/');
		x--;
	}
	ft_putchar('\n');
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
		end(x);
}
