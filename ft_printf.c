/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 14:57:38 by psydenst          #+#    #+#             */
/*   Updated: 2022/06/27 19:22:37 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h> // APAGAR ESSA MERDA

int ft_print_arg(const char *format, int i, va_list ap);

/* This function will read the input given by user, through format. The function verify if there is 
 a % or 'cspdiuxX%' in the string. */
int	ft_printf(const char *format, ...)
{
	va_list ap;
	int ret;
	int i;

	ret = 0;
	i = 0;
// Declaration of where the list ap starts. Va_list is probably a struct. 
	va_start(ap, format);
	while(format[i])
	{
		if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1]))
		{
			ret += ft_print_arg(format, i, ap);
			printf("O valor de ap é: %s", ap);
			i++;
		}
		else
			ret += ft_print_arg(format, i, ap);
	/* In this case, printf will return the sum between format ret and the return of the functions */ 
		i++;
	}
	va_end(ap);
	return(ret);
}

/* This function will be called if there is a % or 'cspdiuxX%' in the string. That means that printf was called
 * and that it will exist arguments for the function */
int ft_print_arg(const char *format, int i, va_list ap)
{
	if (format[i + 1] == '%')
		return(ft_putchar(format[i + 1]));
	if (format[i + 1] =='c')
		return(ft_putchar(va_arg(ap, int)));
	if (format[i + 1] =='s')
		return(ft_putstr(va_arg(ap, char *)));
// 	// if (format[i + 1] =='p')
// // ainda entendendendo o %p (para ponteiros)		
// 	if (format[i + 1] =='d')
// 		return(ft_putnbr(va_arg(ap, int)));
// 	if (format[i + 1] =='i')
// 		return(ft_putnbr(va_arg(ap, int)));
// 	if (format[i + 1] =='u')
// 		return(ft_put_unsig_nbr(va_arg(ap, int)));
// 	if (format[i + 1] =='x')
// 		return(ft_hexa(va_arg(ap, unsigned int), "0123456789ABCDEF"));
// 	if (format[i + 1] =='X')
// 		return(ft_hexa(va_arg(ap, unsigned int), "0123456789abcdef"));
// 	else
		return (0);
}

int main()
{
	printf("Original: Pedro\n");
	ft_printf("Pedrin: Pedro\n");		
}
