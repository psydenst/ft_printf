/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 14:57:38 by psydenst          #+#    #+#             */
/*   Updated: 2022/06/23 19:58:31 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"


/* This function will read the input given by user, through format. The function verify if there is 
 a % or 'cspdiuxX%' in the string. */
int	ft_printf(const char *format, ...)
{
	va_list begin;
	int ret;
	int i;

	ret = 0;
	i = 0;
	va_start(begin, format)
	while(format[i])
	{
		if (format[i] == '%' && ft_strchr(format, 'cspdiuxX%')
				ret = ft_print_arg(format, i, ap);
		else
		ret = ret + ft_print_arg(format, i, begin);
	/* In this case, printf will return the sum between format ret and the return of the functions  */ 
	i++;
	}
	return(ret)
}

/* This function will be called if there is a % or 'cspdiuxX%' in the string. That means that printf was called
 * and that it will exist arguments for the function */
ft_print_arg(const char format, int i, va_list p)
{
	if (format[i + 1] =='%';
		qqc;
	if (format[i + 1] =='c';
		qqc;
	if (format[i + 1] =='s';
		qqc;
	if (format[i + 1] =='p';
		qqc;
	if (format[i + 1] =='d';
		qqc;
	if (format[i + 1] =='i';
		qqc;
	if (format[i + 1] =='u';
	if (format[i + 1] =='x';
	if (format[i + 1] =='X';
}
