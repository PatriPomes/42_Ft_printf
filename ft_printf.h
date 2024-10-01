/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamanzan <pamanzan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 08:29:46 by pamanzan          #+#    #+#             */
/*   Updated: 2024/09/23 12:13:40 by pamanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>

int		ft_printf(const char *, ...);
void	ft_putchar_sp(char i, int *count);
void	ft_putstr_sp(char *str, int *count);
void	ft_hexa(char *str, int *count);
void	ft_entero(int number, int *count);
void	ft_decim_us(unsigned int number, int *count);
void	ft_hex_up(unsigned int str, int *count);
void	ft_hex_lo(unsigned int str, int *count);

#endif
