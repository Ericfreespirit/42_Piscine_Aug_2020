/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eriling <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 11:22:09 by eriling           #+#    #+#             */
/*   Updated: 2020/08/12 15:50:17 by eriling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		len;
	int		i;
	int		*tab;

	len = 0;
	if (max > min)
		len = max - min;
	else if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(tab = malloc(sizeof(*tab) * len)))
		return (-1);
	i = 0;
	while (min < max)
	{
		tab[i++] = min++;
	}
	*range = tab;
	return (len);
}
