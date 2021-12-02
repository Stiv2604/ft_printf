/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:32:26 by marvin            #+#    #+#             */
/*   Updated: 2021/11/23 20:32:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


static char *ft_subjoin_zero(char *s1, char *s2, unsigned int s2_start)
{
	size_t	s1l;
	size_t	s2l;
	char	*new;

	s1l = ft_strlen(s1);
	s2l = ft_strlen(s2) - s2_start;
	if (!(new = (char *)malloc((s1l + s2l + 1) * sizeof(char))))
		return (NULL);
	s1 += s2_start;
    if (*s1 == '-' && *s2 == '0')
	{
		*new++ = '-';
		s1++;
	}
    while (*s2)
		*new++ = *s2++;
	while (*s1)
		*new++ = *s1++;
	*new = '\0';
	return (new - (s1l + s2l));
}

char    *ft_format(t_print *print, int c, int *p)
{
    char    *str;
    char    *new;
    int     s_len;

	s_len = *p - (print->value_len);
    str = ft_strnew(s_len, print);
    str = ft_memset(str, c, s_len);
    if (print->is_zero)
        new = ft_subjoin_zero(print->specifier_value, str, 0);
    else
    {
        new = ft_subjoin(print->specifier_value, str, 0);
    }
	free(print->specifier_value);
	free(str);
    return (new);
}
