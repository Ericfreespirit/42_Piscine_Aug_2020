/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eriling <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 11:08:45 by eriling           #+#    #+#             */
/*   Updated: 2020/08/24 13:59:29 by eriling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	solve(int a, char op, int b)
{
	if (b == 0 && op == '/')
		write(1, "Stop : division by zero", 23);
	else if (b == 0 && op == '%')
		write(1, "Stop : modulo by zero", 21);
	else if (op == '+')
		ft_putnbr(a + b);
	else if (op == '-')
		ft_putnbr(a - b);
	else if (op == '*')
		ft_putnbr(a * b);
	else if (op == '/')
		ft_putnbr(a / b);
	else if (op == '%')
		ft_putnbr(a % b);
}

char	is_operator(char c)
{
	if (c == '+')
		return (c);
	else if (c == '-')
		return (c);
	else if (c == '*')
		return (c);
	else if (c == '/')
		return (c);
	else if (c == '%')
		return (c);
	else
		return (0);
}

int		main(int ac, char **av)
{
	int		a;
	int		b;

	if (ac == 4)
	{
		if (!is_operator(*av[2]))
		{
			write(1, "0\n", 2);
			return (0);
		}
		a = ft_atoi(av[1]);
		b = ft_atoi(av[3]);
		solve(a, is_operator(*av[2]), b);
		write(1, "\n", 1);
	}
	return (0);
}
