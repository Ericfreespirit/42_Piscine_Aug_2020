/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eriling <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 09:38:26 by eriling           #+#    #+#             */
/*   Updated: 2020/08/06 18:30:45 by eriling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int a, int b, int c)
{
	if (a < b && b < c)
	{
		ft_putchar(a + '0');
		ft_putchar(b + '0');
		ft_putchar(c + '0');
		if (a != 7)
			write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;

	a = 0;
	b = 1;
	c = 2;
	while (a <= 7)
	{
		while (b <= 8)
		{
			while (c <= 9)
			{
				print(a, b, c);
				c++;
			}
			b++;
			c = b;
		}
		a++;
		b = a;
	}
}
