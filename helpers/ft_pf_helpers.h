/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_helpers.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladir <ladir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 12:13:58 by ladir             #+#    #+#             */
/*   Updated: 2026/01/26 13:56:34 by ladir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PF_HELPERS_H
# define FT_PF_HELPERS_H

# include "../libft/libft.h"
# include <stdarg.h>

enum e_flags {
	left_adjust,
	zero_pad,
	alternate_form,
	pre_blank,
	sign
};

int		ft_selector(char **fmt, va_list args);
char	*ft_pf_char_to_str(unsigned int c, int *flags, int width);
char	*ft_pf_strdup(char *str, int precision, int *flags, int width);

#endif