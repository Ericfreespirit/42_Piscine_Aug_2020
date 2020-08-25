/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eriling <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 08:25:04 by eriling           #+#    #+#             */
/*   Updated: 2020/08/24 15:25:22 by eriling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int asc;
	int des;

	i = 0;
	asc = 1;
	des = 1;
	while (i + 1 < length)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			asc = 0;
		if ((*f)(tab[i], tab[i + 1]) < 0)
			des = 0;
		if (des == 0 && asc == 0)
			return (0);
		i++;
	}
	return (1);
}
