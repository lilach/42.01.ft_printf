/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladir <ladir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:56:07 by ladir             #+#    #+#             */
/*   Updated: 2026/01/19 15:52:34 by ladir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		count;

	va_start(args, fmt);
	count = 0;
	while (fmt[count] != '\0')
	{
		if (fmt[count] == '%')
		{
			// HANDLE THIS
			count++;
			continue ;
		}
		write(1, fmt + (count++), 1);
	}
	va_end(args);
	return (count);
}
