/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsargsya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:49:03 by tsargsya          #+#    #+#             */
/*   Updated: 2024/12/20 17:37:06 by tsargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

ssize_t	ft_putchar(char c)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
}

ssize_t	ft_putstr(char *s)
{
	ssize_t	len;
	ssize_t	result;

	len = 0;
	if (!s)
		s = "(null)";
	while (*s)
	{
		result = ft_putchar(*s);
		if (result == -1)
			return (-1);
		len += result;
		s++;
	}
	return (len);
}
