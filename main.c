/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsargsya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:57:35 by tsargsya          #+#    #+#             */
/*   Updated: 2024/12/18 14:57:37 by tsargsya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int	main(void)
{
	int number = -2147483648;
	char *string = "42 School";
	char *string_empty = "";
	void *ptr = &number;
	char *null_ptr = NULL;
	char character = 'A';
	int res = 0;
	int res_or = 0;

	printf("Testing ft_printf vs printf:\n");

	// Basic tests
	res = ft_printf("imp: Character: %c\n", character);
	res_or = printf("ori: Character: %c\n", character);
	printf("Return comparison: res = %d, res_or = %d\n\n", res, res_or);

	res = ft_printf("imp: String: %s\n", string);
	res_or = printf("ori: String: %s\n", string);
	printf("Return comparison: res = %d, res_or = %d\n\n", res, res_or);

	res = ft_printf("imp: Empty string: %s\n", string_empty);
	res_or = printf("ori: Empty string: %s\n", string_empty);
	printf("Return comparison: res = %d, res_or = %d\n\n", res, res_or);

	res = ft_printf("imp: Null pointer: %s\n", null_ptr);
	res_or = printf("ori: Null pointer: %s\n", null_ptr);
	printf("Return comparison: res = %d, res_or = %d\n\n", res, res_or);

	// More complex cases
	res = ft_printf("imp: Mixed: %s %s %s %s %s\n", " - ", "", "4", "", "2 ");
	res_or = printf("ori: Mixed: %s %s %s %s %s\n", " - ", "", "4", "", "2 ");
	printf("Return comparison: res = %d, res_or = %d\n\n", res, res_or);

	// Special cases
	res = ft_printf("imp: Pointer: %p\n", ptr);
	res_or = printf("ori: Pointer: %p\n", ptr);
	printf("Return comparison: res = %d, res_or = %d\n\n", res, res_or);

	res = ft_printf("imp: Decimal: %d\n", number);
	res_or = printf("ori: Decimal: %d\n", number);
	printf("Return comparison: res = %d, res_or = %d\n\n", res, res_or);

	res = ft_printf(0);
	res_or = printf(0);
	printf("On null arguments: res = %d, res_or = %d\n\n", res, res_or);

	// Output to a closed stdout
	close(1);
	res = ft_printf("imp: Should fail\n");
	res_or = printf("ori: Should fail\n");
	int new_stdout = open("/dev/tty", O_WRONLY);
	dup2(new_stdout, 1);

	printf("After closing stdout: res = %d, res_or = %d\n", res, res_or);

	close(new_stdout);
	return (0);
}
