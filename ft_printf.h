/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsargsya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:18:42 by tsargsya          #+#    #+#             */
/*   Updated: 2024/12/20 17:35:48 by tsargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>

int				ft_printf(const char *format, ...);
ssize_t			ft_putchar(char c);
ssize_t			ft_putstr(char *s);
ssize_t			ft_putnbr(int n);
ssize_t			ft_unsigned_putnbr(unsigned int n);
ssize_t			ft_puthex(unsigned long nbr, const char *base);
ssize_t			ft_putptr(void *ptr);

#endif
