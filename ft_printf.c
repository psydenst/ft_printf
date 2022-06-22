/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 14:57:38 by psydenst          #+#    #+#             */
/*   Updated: 2022/06/22 16:50:56 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function will read the input given by user, through format. The function verify if there is 
 a % or 'cspdiuxX%' in the string. */
int	ft_printf(const char *format, ...)
{
	int ret;
	int i;
	va_list ap;

	ret = 0;
	int = 0;
	while(format[i])
	{
		if (format[i] == '%' && strchr(format, 'cspdiuxX%')
				ret = ft_print_arg(format, i, ap);
		else
		ret = format[i
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
