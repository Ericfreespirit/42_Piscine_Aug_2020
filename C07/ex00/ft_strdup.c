/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eriling <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 16:37:39 by eriling           #+#    #+#             */
/*   Updated: 2020/08/18 16:37:10 by eriling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*s;

	i = 0;
	while (src[i])
		i++;
	if (!(s = malloc(sizeof(*s) * (i + 1))))
		return (NULL);
	s[i] = '\0';
	i = 0;
	while (src[i])
	{
		s[i] = src[i];
		i++;
	}
	return (s);
}
