/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkamil-h <tkamil-h@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 11:04:18 by tkamil-h          #+#    #+#             */
/*   Updated: 2026/02/23 11:05:03 by tkamil-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_recursive(long nb)
{
	int	count;

	count = 0;
	if (nb >= 10)
		count += ft_putnbr_recursive(nb / 10);
	ft_putchar_fd((nb % 10) + '0', 1);
	return (count + 1);
}

int	print_nbr(int n)
{
	int		count;
	long	nb;

	count = 0;
	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', 1);
		nb = -nb;
		count++;
	}
	count += ft_putnbr_recursive(nb);
	return (count);
}
