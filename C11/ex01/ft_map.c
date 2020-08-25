/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eriling <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 08:22:54 by eriling           #+#    #+#             */
/*   Updated: 2020/08/24 15:23:18 by eriling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *map;

	i = 0;
	if (!(map = malloc(sizeof(*tab) * length)))
		return (NULL);
	while (i < length)
	{
		map[i] = (*f)(tab[i]);
		i++;
	}
	return (map);
}
