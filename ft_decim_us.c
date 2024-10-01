/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decim_us.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamanzan <pamanzan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:07:47 by pamanzan          #+#    #+#             */
/*   Updated: 2024/07/04 15:11:55 by pamanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_decim_us(unsigned int n, int *count)
{
	char	digit;

	if (n >= 10)
		ft_entero(n / 10, count);
	digit = n % 10 + '0';
	ft_putchar_sp(digit, count);
}
