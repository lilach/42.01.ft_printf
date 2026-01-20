/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladir <ladir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:55:28 by ladir             #+#    #+#             */
/*   Updated: 2026/01/19 16:59:09 by ladir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_itoa_base_helper(long nb, char *dst)
{
	size_t	length;

	length = 0;
	if (nb % 10 != nb)
		length = ft_itoa_helper(nb / 10, dst);
	dst[length++] = '0' + nb % 10;
	dst[length] = '\0';
	return (length);
}

char	*ft_itoa_base(int n)
{
	long	n_long;
	size_t	loc;
	char	buff[12];

	n_long = (long)n;
	loc = 0;
	if (n_long < 0)
	{
		buff[loc++] = '-';
		n_long *= -1;
	}
	ft_itoa_helper(n_long, buff + loc);
	return (ft_strdup(buff));
}
