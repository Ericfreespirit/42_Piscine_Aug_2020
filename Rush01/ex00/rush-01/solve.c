/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abauri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 10:47:55 by abauri            #+#    #+#             */
/*   Updated: 2020/08/16 14:13:24 by abauri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void print(int board[6][6])
{
	int y;
	int x;

	y = 0;
	while(y < 6)
	{
		x = 0;
		while(x < 6)
		{
			printf("%d | ",board[y][x]);
			x++;
		}
		printf("\n-----------------------------------\n");
		y++;
	}
}

int remove_nb(int nbr, int elim)
{
	int		i;
	int 	n;
	char str[4];

	n = 0;
	i = 0;
	while(nbr)
	{
		if(nbr % 10 != elim)
		{
			str[i] = '0' + nbr % 10;	
			i++;
		}	
		nbr /= 10;
	}
	while(--i >= 0)
	{
		n *= 10;
		n += str[i] - '0';
	
	}
	return n;

}

void elim_row(int board[6][6], int y, int elim)
{
	int x;

	x = 1;
	while(x < 5)
	{
		if(board[y][x] > 9)
		{	
			board[y][x] = remove_nb(board[y][x],elim);
		}
	x++;
	}
}
void elim_col(int board[6][6], int x, int elim)
{
	int y;

	y = 1;
	while(y < 5)
	{
		if(board[y][x] > 9)
		{
			board[y][x] = remove_nb(board[y][x],elim);	
		}
		y++;
	}
}

void elim(int board[6][6], int x, int y)
{
	int elim;
   
	elim = board[y][x];	
	elim_row(board, y, elim);
	elim_col(board, x, elim);

}

void insert(int board[6][6], int x, int y, int insert)
{
	board[y][x] = insert;
	elim(board, x, y);

}

int main (int ac , char **av)
{
	int tab[16];
	int i;
	int j;

	i = 0;
	if(ac != 2)
		return (1);
	while(av[1][i])
	{
		if(av[1][i] != ' ')
		{
			tab[j] = av[1][i] - '0';
			j++;
		}
		i++;
	}
	i = 0;
	if(j != 16)
		return (1);
	int	board[6][6] = {
		{0,tab[0],tab[1],tab[2],tab[3],0},
		{tab[8],1234,1234,1234,1234,tab[12]},
		{tab[9],1234,1234,1234,1234,tab[13]},
		{tab[10],1234,1234,1234,1234,tab[14]},
		{tab[11],1234,1234,1234,1234,tab[15]},
		{0,tab[4],tab[5],tab[6],tab[7],0}
	};
//  insert(board, x, y, insert);
	insert(board, 1, 4, 4);
	insert(board, 1, 3, 3);
	insert(board, 1, 2, 2);
	insert(board, 1, 1, 1);
	insert(board, 2, 1, 2);
	insert(board, 3, 1, 3);
	insert(board, 4, 1, 4);
	print(board);
	return (0);
}
