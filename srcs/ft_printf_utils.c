/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dridolfo <dridolfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 16:49:43 by dridolfo          #+#    #+#             */
/*   Updated: 2022/01/25 10:46:57 by dridolfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int		i;

	i = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[i] != '\0')
		ft_putchar(s[i++]);
	return (i);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_len_num(long long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	ft_putnbr_d(long long int nbr, char *base)
{
	long long int	n;
	long long int	j;
	int				*i;
	int				p;

	i = (int *) malloc(sizeof(int));
	j = (long long int) ft_strlen(base);
	*i = 0;
	n = (long long int) nbr;
	if (n < 0)
	{
		*i += ft_putchar('-');
		n *= -1;
	}
	ft_putnbr(n, base, j, i);
	p = *i;
	free(i);
	return (p);
}
