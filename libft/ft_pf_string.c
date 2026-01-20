/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladir <ladir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:04:15 by ladir             #+#    #+#             */
/*   Updated: 2026/01/20 17:54:44 by ladir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	char *str				: The string to do manipulation on
	size_t width			: Minimum width for the string. prepend with blank space
	int precision			: Maximum length of the string.
	unsigned char l_align	: Left align the string
*/
char	*ft_pf_string(char *str, size_t width, int precision, unsigned char l_align)
{
	if (precision >= 0)
	{
		//crop the string to the percision size
	}
	if (width > 0)
	{
		// prepend / append required spaces
	}
	// return the new string :)
}