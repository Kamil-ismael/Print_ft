/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkamil-h <tkamil-h@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 13:02:15 by tkamil-h          #+#    #+#             */
/*   Updated: 2026/02/23 15:14:06 by tkamil-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_format(va_list args, const char *input);

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, input);
	while (*input != '\0')
	{
		if (*input == '%')
		{
			input++;
			if (*input == '%')
				i += print_char('%');
			else
				i += check_format(args, input);
		}
		else
			i += print_char(*input);
		input++;
	}
	va_end(args);
	return (i);
}

static int	check_format(va_list args, const char *input)
{
	if (*input == 'c')
		return (print_char(va_arg(args, int)));
	else if (*input == 's')
		return (print_str((char *)va_arg(args, char *)));
	else if (*input == 'd' || *input == 'i')
		return (print_nbr(va_arg(args, int)));
	else if (*input == 'u')
		return (print_unsigned(va_arg(args, unsigned int)));
	else if (*input == 'x' || *input == 'X')
		return (print_hex(va_arg(args, unsigned int), *input));
	else if (*input == 'p')
		return (print_ptr(va_arg(args, void *)));
	return (0);
}
