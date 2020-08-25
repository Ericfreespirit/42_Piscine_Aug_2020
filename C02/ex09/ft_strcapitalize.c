/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eriling <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 09:29:56 by eriling           #+#    #+#             */
/*   Updated: 2020/08/07 14:22:31 by eriling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		blank(char c)
{
	if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] && blank(str[i]))
		i++;
	if (i == 0 && !blank(str[i]))
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	while (str[i])
	{
		if (!blank(str[i]) && blank(str[i - 1]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (!blank(str[i - 1]) && !blank(str[i]))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
