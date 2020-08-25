/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eriling <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 20:02:29 by eriling           #+#    #+#             */
/*   Updated: 2020/08/20 21:30:00 by eriling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	displaysep(char **res, char *sep)
{
	int		i;

	i = 0;
	while (sep[i])
	{
		**res = sep[i++];
		*res += 1;
	}
}

void	solve(int size, char *s1, char **strs, char *sep)
{
	int i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (strs[i][j])
			*s1++ = strs[i][j++];
		if (i == size - 1)
			*s1 = 0;
		else if (*sep)
			displaysep(&s1, sep);
		i++;
		j = 0;
	}
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	char	*str2;
	int		c_letter;

	if (size > 0)
	{
		c_letter = (ft_strlen(strs[size - 1]) + 1) + (strs[size - 1] - *strs);
		if (!(str = malloc(c_letter + ((ft_strlen(sep) - 1) * (size - 1)))))
			return (NULL);
	}
	else
	{
		str = malloc(sizeof(*str) + 1);
		str[0] = 0;
		return (str);
	}
	str2 = str;
	solve(size, str2, strs, sep);
	return (str);
}
