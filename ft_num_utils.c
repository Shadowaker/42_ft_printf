/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dridolfo <dridolfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:00:38 by dridolfo          #+#    #+#             */
/*   Updated: 2022/01/23 22:49:17 by dridolfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_printf.h"

void	ft_putnbr(long long int n, char *base, long long int l)
{
	if (n > l)
	{
		ft_putnbr(n / l, base, l);
		ft_putnbr(n % l, base, l);
	}
	else
		ft_putchar(base[n]);
}

int	ft_putnbr_base(long long int nbr, char *base)
{
	long long int	n;
	long long int	j;

	j = (long long int) ft_strlen(base);
	n = (long long int) nbr;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	ft_putnbr(n, base, j);
	return (ft_len_num(nbr));
}

int	ft_putint(int nbr)
{
	int	i;

	i = ft_putnbr_base((long long int) nbr, "0123456789");
	return (i);
}

int	ft_putuns(unsigned long long int nbr)
{
	int	i;

	i = ft_putnbr_base((long long int) nbr, "0123456789");
	return (i);
}

int	ft_putp(unsigned long int nbr)
{
	int	i;

	ft_putchar('0');
	ft_putchar('x');
	i = ft_putnbr_base((long long int) nbr, "0123456789abcdef");
	return (i - 2);
}
