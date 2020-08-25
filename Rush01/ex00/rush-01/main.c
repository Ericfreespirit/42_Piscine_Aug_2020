/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eriling <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 10:52:56 by eriling           #+#    #+#             */
/*   Updated: 2020/08/15 15:12:49 by abauri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		check_data(char	*val);
int		**solve(int *tab);
//print board


int		main(int ac, char **av)
{

 	int		tab[16];
	int		i;
	int		j;

	if(ac == 2 && check_data(av[1]))
	{	
		i = 0;
		j = 0;
		while (av[1][i])
		{
			if (av[1][i] >= '0' && av[1][i] <= '9')
			{
				tab[j] = av[1][i] - '0';
				j++;
			}
			i++;
		}
		solve(tab);
		
	}
	write(1, "\n", 1);
	return (0);
}

