/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladir <ladir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 15:35:05 by ladir             #+#    #+#             */
/*   Updated: 2026/01/26 16:03:26 by ladir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pf_helpers.h"

char	*ft_pf_left_pad(char **str, int width, char pad)
{
	char	*orig;
	size_t	len;
	int		i;

	len = ft_strlen(*str);
	if (len >= width)
		return (*str);
	orig = *str;
	*str = malloc(width + 1);
	if (!*str)
		return (NULL);
	i = 0;
	while (i < width)
		*str[i++] = pad;
	*str[i--] = '\0';
	while (len > 0)
		*str[i--] = orig[len--];
	free(orig);
	return (*str);
}

char	*ft_pf_right_pad(char **str, int width)
{
	char	*orig;
	size_t	len;
	int		i;

	len = ft_strlen(*str);
	if (len >= width)
		return (*str);
	orig = *str;
	*str = malloc(width + 1);
	if (!*str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*str[i] = orig[i];
		i++;
	}
	while (i < width)
		*str[i++] = ' ';
	*str[i] = '\0';
	free(orig);
	return (*str);
}

char	*ft_pf_char_to_str(unsigned int c, int *flags, int width)
{
	char	*str;

	str = malloc(2);
	if (!str)
		return (NULL);
	str[0] = (char)c;
	str[1] = '\0';
	if (width > 1)
	{
		if (flags[left_adjust])
			str = ft_pf_right_pad(&str, width);
		else
			str = ft_pf_left_pad(&str, width, ' ');
	}
	return (str);
}

char	*ft_pf_strdup(char *str, int precision, int *flags, int width)
{
	char	*dest;
	size_t	len;

	dest = ft_strdup(str);
	len = ft_strlen(dest);
	if (precision > 0 && precision < len)
	{
		dest[precision] = '\0';
		len = precision;
	}
	if (flags[left_adjust])
		dest = ft_pf_right_pad(&dest, width);
	else
		dest = ft_pf_left_pad(&dest, width, ' ');
	return (dest);
}

char	*ft_pf_strnum(int num, int precision, int *flags, int width)
{

}