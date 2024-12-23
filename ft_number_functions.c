/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsargsya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:53:38 by tsargsya          #+#    #+#             */
/*   Updated: 2024/12/20 17:35:25 by tsargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

static ssize_t	ft_putnbr_recursive(unsigned int nbr);

static ssize_t	ft_putnbr_recursive(unsigned int nbr)
{
	ssize_t	len;
	ssize_t	res;

	len = 0;
	if (nbr >= 10)
	{
		res = ft_putnbr_recursive(nbr / 10);
		if (res == -1)
			return (-1);
		len += res;
	}
	if (ft_putchar((nbr % 10) + '0') == -1)
		return (-1);
	len += 1;
	return (len);
}

ssize_t	ft_putnbr(int n)
{
	ssize_t			len;
	unsigned int	nbr;

	len = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		nbr = -n;
		len += 1;
	}
	else
		nbr = n;
	len += ft_putnbr_recursive(nbr);
	if (len == -1)
		return (-1);
	return (len);
}

ssize_t	ft_puthex(unsigned long nbr, const char *base)
{
	ssize_t	len;
	ssize_t	res;

	len = 0;
	if (nbr >= 16)
	{
		res = ft_puthex(nbr / 16, base);
		if (res == -1)
			return (-1);
		len += res;
	}
	if (ft_putchar(base[nbr % 16]) == -1)
		return (-1);
	len += 1;
	return (len);
}

ssize_t	ft_unsigned_putnbr(unsigned int nbr)
{
	ssize_t	len;
	ssize_t	res;

	len = 0;
	if (nbr >= 10)
	{
		res = ft_unsigned_putnbr(nbr / 10);
		if (res == -1)
			return (-1);
		len += res;
	}
	if (ft_putchar((nbr % 10) + '0') == -1)
		return (-1);
	len += 1;
	return (len);
}
