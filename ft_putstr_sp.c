/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_sp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamanzan <pamanzan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 08:58:20 by pamanzan          #+#    #+#             */
/*   Updated: 2024/07/06 12:57:34 by pamanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	ft_putstr_sp(char *str, int *count)
{
	int	i;

	if (str == NULL)
		return (ft_putstr_sp("(null)", count));
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar_sp(str[i], count);
		i++;
	}
}
