/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladir <ladir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:55:28 by ladir             #+#    #+#             */
/*   Updated: 2026/01/22 14:46:47 by ladir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_itoa_base_helper(
	size_t nb,
	char *dst,
	unsigned int base,
	char alphabet)
{
	size_t			length;
	unsigned int	digit;

	length = 0;
	if (nb % base != nb)
		length = ft_itoa_base_helper(nb / 10, dst, base, alphabet);
	digit = nb % base;
	if (digit < 10)
		dst[length++] = '0' + digit;
	else
		dst[length++] = alphabet + digit;
	dst[length] = '\0';
	return (length);
}

char	*ft_itoa_base(int n, unsigned int base, char alphabet)
{
	long	n_long;
	size_t	loc;
	char	buff[25];

	n_long = (long)n;
	loc = 0;
	if (n_long < 0)
	{
		buff[loc++] = '-';
		n_long *= -1;
	}
	ft_itoa_base_helper(n_long, buff + loc, base, alphabet);
	return (ft_strdup(buff));
}
