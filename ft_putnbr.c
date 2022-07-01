/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:29:23 by psydenst          #+#    #+#             */
/*   Updated: 2022/07/01 17:06:01 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_is_negative(int n)
{
	write(1, "-", 1);
	n = n * -1;
	return (n);
}

int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
	}
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

int	ft_putnbr(int n)
{
	char	c;
	int		len;

	len = ft_len(n);
	if (n == -2147483648)
		write (1, "-2147483648", 11);
	else
	{
		if (n < 0)
			n = ft_is_negative(n);
		if (n < 10)
		{
			c = n + '0';
			write (1, &c, 1);
		}
		else
		{
			ft_putnbr(n / 10);
			c = (n % 10) + '0';
			write(1, &c, 1);
		}
	}
	return (len);
}
