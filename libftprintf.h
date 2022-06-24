/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:04:14 by psydenst          #+#    #+#             */
/*   Updated: 2022/06/24 16:12:01 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int	ft_putchar(char c, int i);
int	ft_putnbr(int nbr);
int	ft_putstr(char *str);
int	putnbr_u(unsigned int nbr);
int	put_pointer(void *nbr, char *base);
int	put_hex(unsigned int nbr, char *base);
int	ft_printf(const char	*format, ...);

#endif
