/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 14:57:38 by psydenst          #+#    #+#             */
/*   Updated: 2022/06/24 16:21:09 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_print_arg(const char *format, int i, va_list p);

/* This function will read the input given by user, through format. The function verify if there is 
 a % or 'cspdiuxX%' in the string. */
int	ft_printf(const char *format, ...)
{
	va_list begin;
	int ret;
	int i;

	ret = 0;
	i = 0;
	va_start(begin, format);
	while(format[i])
	{
		if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1]))
			ret = ft_print_arg(format, i, begin);
		else
		ret += ft_print_arg(format, i, begin);
	/* In this case, printf will return the sum between format ret and the return of the functions  */ 
	i++;
	}
	return(ret);
}

/* This function will be called if there is a % or 'cspdiuxX%' in the string. That means that printf was called
 * and that it will exist arguments for the function */
int ft_print_arg(const char *format, int i, va_list p)
{
	if (format[i + 1] == '%')
		return(ft_putchar('%', 1));
	// if (format[i + 1] =='c';
	// 	qqc;
	// if (format[i + 1] =='s';
	// 	qqc;
	// if (format[i + 1] =='p';
	// 	qqc;
	// if (format[i + 1] =='d';
	// 	qqc;
	// if (format[i + 1] =='i';
	// 	qqc;
	// if (format[i + 1] =='u';
	// if (format[i + 1] =='x';
	// if (format[i + 1] =='X';

		return (0);
}

#include <stdio.h>
int main()
{
	ft_printf("Pedrin: %%\n");
	printf("Original: %%\n");		
}
