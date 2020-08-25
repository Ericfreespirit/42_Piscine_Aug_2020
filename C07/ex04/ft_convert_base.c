/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eriling <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 09:46:45 by eriling           #+#    #+#             */
/*   Updated: 2020/08/20 22:12:21 by eriling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

int		check_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
			return (0);
		if (base[i] == '-' || base[i] == '+' || base[i] <= 31)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

char	*in_base(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (&base[i]);
		i++;
	}
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	unsigned int		i;
	int					sign;
	unsigned int		nb;

	i = 0;
	sign = 1;
	nb = 0;
	if (!check_base(base))
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (in_base(str[i], base))
	{
		nb *= ft_strlen(base);
		nb += (in_base(str[i], base) - base);
		i++;
	}
	return (nb * sign);
}

char	*ft_itoa_base(int nbr, char *base)
{
	int		i;
	long	num;
	int		sign;
	char	*str;

	num = (nbr < 0) ? -((long)nbr) : nbr;
	i = (nbr < 0) ? 2 : 1;
	sign = (nbr < 0) ? -1 : 1;
	while (num /= ft_strlen(base))
		i++;
	if (!(str = malloc(sizeof(*str) * (i + 1))))
		return (NULL);
	str[i] = '\0';
	num = (nbr < 0) ? -((long)nbr) : nbr;
	while (i-- + sign)
	{
		str[i] = base[(num % ft_strlen(base))];
		num /= ft_strlen(base);
	}
	sign == -1 ? str[0] = '-' : 0;
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		res_ab;

	if (!check_base(base_from) || !check_base(base_to))
		return (NULL);
	res_ab = ft_atoi_base(nbr, base_from);
	return (ft_itoa_base(res_ab, base_to));
}
