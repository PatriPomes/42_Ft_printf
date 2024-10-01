/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_entero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamanzan <pamanzan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 10:01:11 by pamanzan          #+#    #+#             */
/*   Updated: 2024/07/04 15:12:21 by pamanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_entero(int n, int *count)
{
	char	digit;

	if (n == -2147483648)
	{
		ft_putchar_sp('-', count);
		ft_putchar_sp('2', count);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_sp('-', count);
		n *= -1;
	}
	if (n >= 10)
		ft_entero(n / 10, count);
	digit = n % 10 + '0';
	ft_putchar_sp(digit, count);
}
