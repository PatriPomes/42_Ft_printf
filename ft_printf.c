/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamanzan <pamanzan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 08:41:31 by pamanzan          #+#    #+#             */
/*   Updated: 2024/07/05 10:47:17 by pamanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdarg.h>

static void	ft_select_type(va_list args, const char format, int *count)
{
	if (format == 'c')
		ft_putchar_sp(va_arg(args, int), count);
	if (format == 's')
		ft_putstr_sp(va_arg(args, char *), count);
	if (format == 'p')
		ft_hexa(va_arg(args, void *), count);
	if (format == 'i' || format == 'd')
		ft_entero(va_arg(args, int), count);
	if (format == 'u')
		ft_decim_us(va_arg(args, unsigned int), count);
	if (format == 'x')
		ft_hex_lo(va_arg(args, unsigned int), count);
	if (format == 'X')
		ft_hex_up(va_arg(args, unsigned int), count);
	if (format == '%')
		ft_putchar_sp('%', count);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			count;
	int			i;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			ft_select_type(args, format[i], &count);
		}
		else
		{
			ft_putchar_sp(format[i], &count);
		}
		i++;
	}
	va_end(args);
	return (count);
}

/*int	main(void)
{
	char	*letter;
	void	*nb;
	int	entero;
	unsigned int	unsign;
	unsigned int	num;
	int		total_format;
	int		total_verdadero;

	letter = "Patata";
	total_format = ft_printf("Hola %s \n", letter);
	printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %s \n", letter);
	printf("El size verdadero es: %d\n", total_verdadero);

	nb = 42;
	total_format = ft_printf("Hola %p \n", nb);
	printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %p \n", nb);
	printf("El size verdadero es: %d\n", total_verdadero);

	entero = 042;
	total_format = ft_printf("Hola %i \n", entero);
	printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %i \n", entero);
	printf("El size verdadero es: %d\n", total_verdadero);	

	total_format = ft_printf("Hola %d \n", entero);
	printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %d \n", entero);
	printf("El size verdadero es: %d\n", total_verdadero);

	unsign = -42;
	total_format = ft_printf("Hola %u \n", unsign);
	printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %u \n", unsign);
	printf("El size verdadero es: %d\n", total_verdadero);

	num = 42;
	total_format = ft_printf("Hola %x \n", num);
	printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %x \n", num);
	printf("El size verdadero es: %d\n", total_verdadero);

	total_format = ft_printf("Hola %X \n", num);
	printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %X \n", num);
	printf("El size verdadero es: %d\n", total_verdadero);
	return (0);
}*/
