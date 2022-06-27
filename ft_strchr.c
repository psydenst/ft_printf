/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:55:11 by psydenst          #+#    #+#             */
/*   Updated: 2022/06/27 16:00:59 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == c)
			return ((((char *)str)));
		str++;
	}
	if (*str == c)
		return (((char *)str));
	if (!*str++)
		return ((char *) '\0');
	return (NULL);
}
