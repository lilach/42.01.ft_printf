/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selector.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladir <ladir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:43:57 by ladir             #+#    #+#             */
/*   Updated: 2026/01/20 17:57:16 by ladir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdarg.h>

/*
'-0.'	'-' => left adjusted
		'0' => zero padded (ignored if '-' or '.' are there)
		'.' => precision (in another function), overrides '0'
'# +'	'#' => alternate form, prepend 0x/0X
		' ' => blank space before positive number
		'+' => always add a sign. overrides ' '
*/
static int	ft_pf_flags(char *fmt)
{
	return (0);
}

/*
An optional decimal digit string (with nonzero first digit)
specifying a minimum field width.  If the converted value has
fewer characters than the field width, it will be padded with
spaces on the left (or right, if the left-adjustment flag has been
given).  Instead of a decimal digit string one may write "*" or
"*m$" (for some decimal integer m) to specify that the field width
is given in the next argument, or in the m-th argument,
respectively, which must be of type int.  A negative field width
is taken as a '-' flag followed by a positive field width.  In no
case does a nonexistent or small field width cause truncation of a
field; if the result of a conversion is wider than the field
width, the field is expanded to contain the conversion result.
*/
static int	ft_pf_width(char **fmt)
{
	unsigned int	length;

	length = 0;
	while (*fmt >= '0' && *fmt <= '9')
	{
		length++;
		(*fmt)++;
	}
	return (ft_atoi(*(fmt - length)));
}

/*
An optional precision, in the form of a period ('.') followed by
an optional decimal digit string.  Instead of a decimal digit
string one may write "*" or "*m$" (for some decimal integer m) to
specify that the precision is given in the next argument, or in
the m-th argument, respectively, which must be of type int.  If
the precision is given as just '.', the precision is taken to be
zero.  A negative precision is taken as if the precision were
omitted.  This gives the minimum number of digits to appear for d,
i, o, u, x, and X conversions, the number of digits to appear
after the radix character for a, A, e, E, f, and F conversions,
the maximum number of significant digits for g and G conversions,
or the maximum number of characters to be printed from a string
for s and S conversions.
*/
static int	ft_pf_precision(char **fmt)
{
	int	precision;

	precision = -1;
	if (*fmt == '.')
	{
		(*fmt)++;
		precision = ft_atoi(*fmt);
		while (*fmt >= '0' && *fmt <= '9')
			(*fmt)++;
	}
	return (precision);
}

int	ft_selector(char **fmt, va_list args)
{
	int	len;
	int	flags;

	len = 0;
	flags = 0;
	// order is flags ('-+0 #'), width, precision, specifier
}
