/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eriling <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 14:51:23 by eriling           #+#    #+#             */
/*   Updated: 2020/08/08 19:08:35 by eriling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char s)
{
	write(1, &s, 1);
}

void	print(unsigned char c)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hexa[c / 16]);
	ft_putchar(hexa[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != 0)
	{
		if (*str < 32 || *str > 126)
			print(*str);
		else
			write(1, str, 1);
		++str;
	}
}
