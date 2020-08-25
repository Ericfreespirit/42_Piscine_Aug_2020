/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eriling <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 12:28:08 by eriling           #+#    #+#             */
/*   Updated: 2020/08/14 11:23:42 by eriling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	long i;
	long nbr;

	i = 5;
	nbr = (long)nb;
	if (nbr <= 1)
		return (0);
	else if (nbr <= 3)
		return (1);
	else if (nbr % 2 == 0 || nbr % 3 == 0)
		return (0);
	while (i * i <= nbr)
	{
		if ((nbr % (i)) == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	long nbr;

	nbr = (long)nb;
	if (nbr <= 2)
		return (2);
	if (!(nbr % 2))
		nbr += 1;
	while (!ft_is_prime(nbr))
		nbr += 2;
	return ((int)nbr);
}
