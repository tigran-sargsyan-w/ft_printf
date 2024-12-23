/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsargsya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:39:16 by tsargsya          #+#    #+#             */
/*   Updated: 2024/12/20 17:36:28 by tsargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stddef.h>
#include <unistd.h>

ssize_t	ft_putptr(void *ptr)
{
	ssize_t	len;
	ssize_t	res;

	len = 0;
	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	len = ft_putstr("0x");
	if (len == -1)
		return (-1);
	res = ft_puthex((unsigned long)ptr, "0123456789abcdef");
	if (res == -1)
		return (-1);
	len += res;
	return (len);
}
