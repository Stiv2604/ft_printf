/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_widht_ch_str.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:33:00 by marvin            #+#    #+#             */
/*   Updated: 2021/11/23 20:33:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


static char     *ft_subjoin2(char *s1, char *s2, unsigned int s2_start)
{
	size_t	s1l;
	size_t	s2l;
	char	*new;

	s1l = ft_strlen(s1);
	s2l = ft_strlen(s2) - s2_start;
	if (!(new = (char *)malloc((s1l + s2l + 1) * sizeof(char))))
		return (NULL);
	while (*s2)
		*new++ = *s2++;
	s1 += s2_start;
	while (*s1)
		*new++ = *s1++;
	*new = '\0';
	return (new - (s1l + s2l));
}

static char    *ft_format_str_shar(t_print *print, int c, int *p)
{
    char    *str;
    char    *new;
    int     s_len;

	s_len = *p - (print->value_len);
    str = ft_strnew(s_len, print);
    str = ft_memset(str, c, s_len);
    new = ft_subjoin2(print->specifier_value, str, 0);
	free(print->specifier_value);
	free(str);
    return (new);
}

void    format_widht_ch_str(t_print *print)
{
    if (print->is_widht > print->value_len)
    {
        print->specifier_value = ft_format_str_shar(print, ' ', &print->is_widht);
        print->value_len = print->is_widht;
    }
    return ;
}

static char    *ft_format_num(t_print *print, int c, int *p)
{
    char    *str;
    char    *new;
    int     s_len;

	s_len = *p - (print->value_len);
    str = ft_strnew(s_len, print);
    str = ft_memset(str, c, s_len);
    new = ft_subjoin2(print->specifier_value, str, 0);
	free(print->specifier_value);
	free(str);
    return (new);
}

void    format_widht_num(t_print *print)
{
    if (print->is_widht > print->value_len)
    {
        print->specifier_value = ft_format_num(print, ' ', &print->is_widht);
        print->value_len = print->is_widht;
    }
    return ;
}