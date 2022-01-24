/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dridolfo <dridolfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 18:54:10 by dridolfo          #+#    #+#             */
/*   Updated: 2022/01/24 15:58:52 by dridolfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_strlen(char *s);
int		ft_len_num(long long int n);
int		ft_putnbr_base(long long int n, char *base);
int		ft_putuns(unsigned long long int n);
int		ft_putp(unsigned long int n);
void	ft_putnbr(long long int n, char *base, long long int l, int *i);
int		ft_converter(long long int nbr);

#endif
