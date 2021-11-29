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

char    *ft_format_p(t_print *print, int *p)
{
    char    *str;
    char    *new;

    new = NULL;
    str = NULL;
    //write(1, "1", 1);
    if (print->specifier == 'i' || print->specifier == 'd' || print->specifier == 'u')
    {
        //write(1, "1", 1);
        if (print->value_len < *p)
        {
            str = ft_strnew(*p - print->value_len, print);
            str = ft_memset(str, '0', *p - (print->value_len));
            print->value_len = *p;
        }    
        else if (print->value_len >= *p)
        {
            //write(1, "1", 1);
            return (print->specifier_value);
        }
    }
    if (print->specifier == 's')
    {
        if (print->value_len < *p)
        {
            str = ft_strnew(*p - print->value_len, print);
            str = ft_memset(str, ' ', *p - (print->value_len));
            print->value_len = *p;
        }
        else if (print->value_len >= *p)
        {
            //write(1, "1", 1);
            print->value_len = *p;
            //printf("dssfsdf%s",print->specifier_value);
            return (print->specifier_value);
        }
    }
    if (print->specifier == 'x' || print->specifier == 'X')
    {
        if (print->value_len < *p)
        {
            str = ft_strnew(*p - print->value_len, print);
            str = ft_memset(str, '0', *p - (print->value_len));
            print->value_len = *p;
        }
        else if (print->value_len >= *p)
        {
            //write(1, "1", 1);
            print->value_len = *p;
            //printf("dssfsdf%s",print->specifier_value);
            return (print->specifier_value);
        }
    }
    if (!print->value_len)
        return (str);
    new = ft_subjoin(print->specifier_value, str, 0);
    free(print->specifier_value);
    free(str);
    return (new);
}
