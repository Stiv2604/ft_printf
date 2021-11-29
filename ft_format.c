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

char    *ft_format(t_print *print, int c, int *p)
{
    char    *str;
    char    *new;
    int     s_len;

	new = NULL;
	//str = NULL;
	s_len = *p - (print->value_len);
    str = ft_strnew(s_len, print);
	// str = (char *)malloc(sizeof(char) * (s_len + 1));
    str = ft_memset(str, c, s_len);
    // if (!print->value_len)
    //     return (str);
    new = ft_subjoin(print->specifier_value, str, 0);
    //printf("%s", new);
	free(print->specifier_value);
	free(str);
    return (new);
}
