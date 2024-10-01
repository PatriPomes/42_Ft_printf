/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_lo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamanzan <pamanzan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:30:01 by pamanzan          #+#    #+#             */
/*   Updated: 2024/07/04 15:14:03 by pamanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hex_lo(unsigned int ptr, int *count)
{
	char			hex[17];
	unsigned long	addr;
	int				i;

	addr = (unsigned long)ptr;
	i = 15;
	while (i >= 0)
	{
		hex[i] = "0123456789abcdef"[addr % 16];
		addr /= 16;
		i--;
	}
	hex[16] = '\0';
	i = 0;
	while (hex[i] == '0' && i < 15)
		i++;
	ft_putstr_sp(&hex[i], count);
}
