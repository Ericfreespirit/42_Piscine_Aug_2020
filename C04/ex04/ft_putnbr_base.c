/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eriling <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 10:09:58 by eriling           #+#    #+#             */
/*   Updated: 2020/08/11 17:54:51 by eriling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] <= 31)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	b_len;
	long			num;

	num = nbr;
	if (check_base(base) == 0)
		return ;
	b_len = 0;
	while (base[b_len])
		b_len++;
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (num < b_len)
		write(1, &base[num], 1);
	else if (num >= b_len)
	{
		ft_putnbr_base(num / b_len, base);
		ft_putchar(base[num % b_len]);
	}
}
