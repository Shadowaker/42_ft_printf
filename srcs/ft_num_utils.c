/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dridolfo <dridolfo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:00:38 by dridolfo          #+#    #+#             */
/*   Updated: 2022/01/25 10:47:09 by dridolfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ft_printf.h"

void	ft_putnbr(unsigned long long int n, char *base,
				unsigned long long int l, int *i)
{
	if (n >= l)
	{
		ft_putnbr(n / l, base, l, i);
		ft_putnbr(n % l, base, l, i);
	}
	else
		*i += ft_putchar(base[n]);
}

int	ft_putnbr_base(unsigned long long int nbr, char *base)
{
	unsigned long long int	n;
	unsigned long long int	j;
	int						*i;
	int						p;

	i = (int *) malloc(sizeof(int));
	j = (unsigned long long int) ft_strlen(base);
	*i = 0;
	n = (unsigned long long int) nbr;
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

int	ft_putint(int nbr)
{
	int	i;

	i = ft_putnbr_base((unsigned long long int) nbr, "0123456789");
	return (i);
}

int	ft_putuns(unsigned int nbr)
{
	int	i;

	i = ft_putnbr_base((unsigned long long int) nbr, "0123456789");
	return (i);
}

int	ft_putp(unsigned long long int nbr)
{
	int	i;

	i = ft_putchar('0');
	i += ft_putchar('x');
	i += ft_putnbr_base((unsigned long long int) nbr, "0123456789abcdef");
	return (i);
}
