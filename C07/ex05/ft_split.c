/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eriling <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 13:16:37 by eriling           #+#    #+#             */
/*   Updated: 2020/08/18 17:32:39 by eriling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		blank(char c, char *charset)
{
	int		i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		c_word(char *str, char *charset)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (blank(str[i], charset))
		i++;
	while (str[i])
	{
		if (!blank(str[i], charset) && ((blank(str[i - 1], charset) || i == 0)))
			count++;
		i++;
	}
	return (count);
}

char	*add_str(char *str, char *charset)
{
	int		i;
	char	*tab;

	i = 0;
	while (str[i] && !blank(str[i], charset))
		i++;
	if (!(tab = malloc(sizeof(*tab) * (i + 1))))
		return (NULL);
	i = 0;
	while (str[i] && blank(str[i], charset))
		i++;
	while (str[i] && !blank(str[i], charset))
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(array = malloc(sizeof(*array) * (c_word(str, charset) + 1))))
		return (NULL);
	while (str[i] && blank(str[i], charset))
		i++;
	while (str[i])
	{
		if (!blank(str[i], charset) && ((blank(str[i - 1], charset) || i == 0)))
		{
			array[j] = add_str(&str[i], charset);
			j++;
		}
		i++;
	}
	array[j] = 0;
	return (array);
}
