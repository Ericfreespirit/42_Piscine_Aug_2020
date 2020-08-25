/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eriling <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 08:53:21 by eriling           #+#    #+#             */
/*   Updated: 2020/08/08 17:26:40 by eriling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	j;
	unsigned int	i;

	j = 0;
	i = 0;
	if (!to_find[i])
		return (str);
	while (str[j])
	{
		while (str[j + i] == to_find[i])
		{
			if (to_find[i + 1] == '\0')
				return (&str[j]);
			i++;
		}
		j++;
		i = 0;
	}
	return (0);
}
