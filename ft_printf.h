/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkamil-h <tkamil-h@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 13:36:13 by tkamil-h          #+#    #+#             */
/*   Updated: 2026/02/23 13:01:01 by tkamil-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include "libft/libft.h"

int	ft_printf(const char *input, ...);
int	print_char(char c);
int	print_str(char *str);
int	print_ptr(void *ptr);
int	print_nbr(int n);
int	print_unsigned(unsigned int n);
int	print_hex(uintptr_t n, char format);

#endif
