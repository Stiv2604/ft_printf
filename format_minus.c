/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_minus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:53:04 by marvin            #+#    #+#             */
/*   Updated: 2021/11/29 15:53:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char    *ft_format_minus(t_print *print, int c, int *p)
{
    char    *str;
    char    *new;
    int     s_len;

	new = NULL;
	s_len = *p - (print->value_len);
    str = ft_strnew(s_len, print);
	// str = (char *)malloc(sizeof(char) * (s_len + 1));
    str = ft_memset(str, c, s_len);
    // if (!print->value_len)
    //     return (str);
    new = ft_subjoin(str, print->specifier_value, 0);
    //printf("%s", new);
	free(print->specifier_value);
	free(str);
    return (new);
}

void    format_minus(t_print *print)
{
    if (print->is_minus > print->value_len)
    {
        print->specifier_value = ft_format_minus(print, ' ', &print->is_minus);
        print->value_len = print->is_minus;
    }
    //printf("%s", print->specifier_value);
    return ;
}