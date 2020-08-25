/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eriling <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 11:38:41 by eriling           #+#    #+#             */
/*   Updated: 2020/08/18 11:14:26 by eriling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	long	i;
	long	save;

	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
	save = (long)nb;
	i = (long)nb / 2;
	while ((i * i) != nb)
	{
		i = (i + ((long)nb / i)) / 2;
		if (i >= save)
			return (0);
		save = i;
	}
	return (i);
}
