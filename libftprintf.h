/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:04:14 by psydenst          #+#    #+#             */
/*   Updated: 2022/06/29 18:23:39 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_len(int n);
int		ft_u_len(unsigned int n);
int		ft_put_unsig_nbr(unsigned int n);
int		ft_hexa_len(int nbr);
void	ft_put_hexa(unsigned int nbr, const char format);
int		ft_print_hexa(unsigned int nbr, const char format);
int		ft_len_ptr(unsigned long nbr);
void	ft_put_ptr(unsigned long nbr, const char format);
int		ft_print_ptr(void *nbr, const char format);
int		ft_printf(const char	*format, ...);

#endif
