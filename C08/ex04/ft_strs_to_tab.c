/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eriling <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 12:15:11 by eriling           #+#    #+#             */
/*   Updated: 2020/08/22 19:02:08 by eriling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int						ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char					*ft_strdup(char *str)
{
	char	*s1;
	int		i;

	i = 0;
	while (str[i])
		i++;
	if (!(s1 = malloc(sizeof(*s1) * (i + 1))))
		return (NULL);
	i = 0;
	while (str[i])
	{
		s1[i] = str[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

struct	s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*dest;
	int			i;

	if (!(dest = malloc(sizeof(*dest) * (ac + 1))))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		dest[i].size = ft_strlen(av[i]);
		dest[i].str = av[i];
		dest[i].copy = ft_strdup(av[i]);
		i++;
	}
	dest[i].str = 0;
	return (dest);
}
