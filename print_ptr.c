/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkamil-h <tkamil-h@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 10:05:21 by tkamil-h          #+#    #+#             */
/*   Updated: 2026/02/23 10:58:24 by tkamil-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	print_ptr(void *ptr)
{
	int	count;

	if (!ptr)
		return (print_str("(nil)"));
	count = print_str("0x");
	count += print_hex((uintptr_t)ptr, 'x');
	return (count);
}
