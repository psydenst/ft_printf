/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:47:23 by psydenst          #+#    #+#             */
/*   Updated: 2022/07/01 16:34:08 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_hexa_len(unsigned int nbr)
{
	int	i;

	i = 0;
	while (nbr != 0)
	{
		nbr = nbr / 16;
		i++;
	}
	return (i);
}

void	ft_put_hexa(unsigned int nbr, const char format)
{
	if (nbr >= 16)
	{
		ft_put_hexa(nbr / 16, format);
		ft_put_hexa(nbr % 16, format);
	}
	else
		if (nbr <= 9)
			ft_putchar(nbr + '0');
	else
	{
		if (format == 'x')
			ft_putchar(nbr - 10 + 'a');
		if (format == 'X')
			ft_putchar(nbr - 10 + 'A');
	}
}

int	ft_print_hexa(unsigned int nbr, const char format)
{
	if (nbr == 0)
		return (write(1, "0", 1));
	else
		ft_put_hexa(nbr, format);
	return (ft_hexa_len(nbr));
}

/*
#include <stdio.h>
int main()
{
	printf("Original: %X\n", 0);
	ft_print_hexa(0, 'X');
} */
