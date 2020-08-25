/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eriling <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 11:04:50 by eriling           #+#    #+#             */
/*   Updated: 2020/08/24 11:33:11 by eriling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_add(int a, int b);
void	ft_sub(int a, int b);
void	ft_mut(int a, int b);
void	ft_div(int a, int b);
void	ft_mod(int a, int b);

#endif
