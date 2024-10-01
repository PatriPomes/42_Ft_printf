/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamanzan <pamanzan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:12:15 by pamanzan          #+#    #+#             */
/*   Updated: 2024/07/06 13:01:36 by pamanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	ft_hexa(char *ptr, int *count)
{
	char			hex[17];
	char			*start;
	unsigned long	addr;
	int				i;

	if (ptr == NULL)
		return (ft_putstr_sp("(nil)", count));
	start = "0x";
	addr = (unsigned long)ptr;
	i = 15;
	while (i >= 0)
	{
		hex[i] = "0123456789abcdef"[addr % 16];
		addr /= 16;
		i--;
	}
	hex[16] = '\0';
	ft_putstr_sp(start, count);
	i = 0;
	while (hex[i] == '0' && i < 15)
		i++;
	ft_putstr_sp(&hex[i], count);
}
