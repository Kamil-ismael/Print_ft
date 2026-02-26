/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkamil-h <tkamil-h@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 10:23:30 by tkamil-h          #+#    #+#             */
/*   Updated: 2026/02/23 10:52:58 by tkamil-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(uintptr_t n, char format)
{
	char	*base;
	int		count;

	count = 0;
	if (format == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
	{
		count += print_hex(n / 16, format);
	}
	ft_putchar_fd(base[n % 16], 1);
	return (count + 1);
}
