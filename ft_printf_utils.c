/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:50:43 by psydenst          #+#    #+#             */
/*   Updated: 2022/06/28 20:26:50 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		write(1, "(null)", 6);
	}
	while (s[i] != '\0')
	{
		write(1, &s[i++], 1);
	}
	return (i);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
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
	{
		write (1, "-2147483648", 11);
	}
	else
	{
		if (n < 0)
			write(1, "-", 1);
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

int	ft_put_unsig_nbr(unsigned int n)
{
	char			c;
	int				len;
	unsigned int	n1;

	n1 = n;
	if (n1 < 0)
		n1 = 4294967296 + n1;
	len = ft_len(n1);
	if (n1 < 10)
	{
		c = n1 + '0';
		write (1, &c, 1);
	}
	else
	{
		ft_put_unsig_nbr(n1 / 10);
		c = (n1 % 10) + '0';
		write(1, &c, 1);
	}
	return (len);
}
