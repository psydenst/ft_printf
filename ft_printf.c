/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 14:57:38 by psydenst          #+#    #+#             */
/*   Updated: 2022/06/29 19:55:45 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h> // APAGAR ESSA MERDA

int	ft_print_arg(const char *format, int i, va_list ap);

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		ret;
	int		i;

	ret = 0;
	i = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1]))
		{
			ret += ft_print_arg(format, i, ap);
			i++;
		}
		else
			ret += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (ret);
}

int	ft_print_arg(const char *format, int i, va_list ap)
{
	if (format[i + 1] == '%' && format[i] == '%')
		return (ft_putchar(format[i + 1]));
	if (format[i + 1] == 'c')
		return (ft_putchar(va_arg(ap, int)));
	if (format[i + 1] == 's')
		return (ft_putstr(va_arg(ap, char *)));
	if (format[i + 1] == 'p')
		return (ft_print_ptr(va_arg(ap, void *), format[i + 1]));
	if (format[i + 1] == 'd')
		return (ft_putnbr(va_arg(ap, int)));
	if (format[i + 1] == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	if (format[i + 1] == 'u')
		return (ft_put_unsig_nbr(va_arg(ap, unsigned int)));
	if (format[i + 1] == 'X')
		return (ft_print_hexa(va_arg(ap, unsigned int), format[i + 1]));
	if (format[i + 1] == 'x')
		return (ft_print_hexa(va_arg(ap, unsigned int), format[i + 1]));
	return (0);
}

int main()
{
/* Test %u
	printf("Retorno original: %i\n", printf("%u", -23456));	
	printf("Retorno Pedrin: %i\n", ft_printf("%u", -23456)); 
*/
/* Test %% 
	printf("Retorno da fr_printf: %i", ft_printf("Pedrin: %%")); 
*/
/* Teste %x e %X
	printf("Retorno: %i\n\n", printf("%x\n", '9'));
	printf("Retorno: %i\n\n", ft_printf("%x\n", '9'));
*/
/* %p test */
// char s[] = "Teste";
	printf("Original: %p\n", 10);
	ft_printf("Pedrin: %p\n", 10);
}
