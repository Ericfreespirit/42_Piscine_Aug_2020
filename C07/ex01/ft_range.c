/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eriling <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 17:11:16 by eriling           #+#    #+#             */
/*   Updated: 2020/08/12 11:22:32 by eriling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		len;
	int		*tab;
	int		i;

	i = 0;
	len = 0;
	if (max > min)
		len = max - min;
	else if (min >= max)
		return (NULL);
	if (!(tab = malloc(sizeof(*tab) * len)))
		return (NULL);
	while (i < len)
		tab[i++] = min++;
	return (tab);
}
