/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_low.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahoumi <abahoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:02:58 by abahoumi          #+#    #+#             */
/*   Updated: 2025/10/23 11:26:19 by abahoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	put_hex(unsigned int n)
{
	static char	*hex = "0123456789abcdef";
	static int	total_chars = 0;

	if (n >= 16)
		put_hex(n / 16);
	total_chars += print_char_fd(hex[n % 16], 1);
	return (total_chars);
}

int	print_hex_low(va_list *args)
{
	return (put_hex(va_arg(*args, int)));
}
