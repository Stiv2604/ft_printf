/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:35:57 by marvin            #+#    #+#             */
/*   Updated: 2021/11/23 20:35:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char    *ft_format_p_id(t_print *print, int *p)
{
    char    *str;
    char    *new;

    str = NULL;
    if (print->value_len <= (*p))
    {
        if (*print->specifier_value == '-')
        {
            str = ft_strnew((*p) - print->value_len + 1, print);
            str = ft_memset(str, '0', (*p) - print->value_len + 1);
            print->value_len = (*p) + 1;
        }
        else
        {
            str = ft_strnew((*p) - print->value_len, print);
            str = ft_memset(str, '0', (*p) - print->value_len);
            print->value_len = (*p);
        }
    }
    else
        return (print->specifier_value);
    new = ft_subjoin(print->specifier_value, str, 0);
    free(print->specifier_value);
    free(str);
    return (new);
}

char    *ft_format_p_upperx_lowerx(t_print *print, int *p)
{
    char    *str;
    char    *new;
    
    new = NULL;
    str = NULL;
    if (print->specifier == 'x' || print->specifier == 'X')
    {
        if (print->value_len < (*p))
        {
            str = ft_strnew((*p) - print->value_len, print);
            str = ft_memset(str, '0', (*p) - (print->value_len));
            print->value_len = (*p);
        }
        else if (print->value_len >= (*p))
            return (print->specifier_value);
    }
    if (!print->value_len)
        return (str);
    new = ft_subjoin(print->specifier_value, str, 0);
    free(print->specifier_value);
    free(str);
    return (new);
}

char    *ft_format_p_s(t_print *print, int *p)
{
    char    *str;
    char    *new;

    new = NULL;
    str = NULL;
    if (print->value_len < (*p))
    {
        if (print->value_len == 0)
            return (print->specifier_value);
        return (print->specifier_value);
    }
    else if (print->value_len >= (*p))
    {
        print->value_len = (*p);
        return (print->specifier_value);
    }
    if (!print->value_len)
        return (str);
    new = ft_subjoin(print->specifier_value, str, 0);
    free(print->specifier_value);
    free(str);
    return (new);
}

char    *ft_format_p_u(t_print *print, int *p)
{
    char    *str;
    char    *new;

    new = NULL;
    str = NULL;
    if (print->specifier == 'u')
    {
         if (print->value_len < (*p))
        {
            str = ft_strnew((*p) - print->value_len, print);
            str = ft_memset(str, '0', (*p) - (print->value_len));
            print->value_len = (*p);
        }    
        else if (print->value_len >= (*p))
            return (print->specifier_value);
    }
    if (!print->value_len)
        return (str);
    new = ft_subjoin(print->specifier_value, str, 0);
    free(print->specifier_value);
    free(str);
    return (new);
}
