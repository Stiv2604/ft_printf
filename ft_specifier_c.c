/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_c.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:25:03 by marvin            #+#    #+#             */
/*   Updated: 2021/11/23 20:25:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int  ft_str(char *str)
{
    int flg;

    if (!str)
        flg = 1;
    else
        flg = 0;
    return (flg);
}

void    secret_case(t_print *print, char*str)
{
    if (print->specifier == 'c')
    {
        if (ft_str(str) == 1)
            print->null = 1;
        else
            print->null = 0;
    }
    if (print->null)
    {
        free(str);
    }
	return ;
}

void    ft_specifier_c(t_print *print, va_list arg)
{
    char    c;

    c = (unsigned char)va_arg(arg, int);
    if (print->specifier == 'c')
            print->specifier_value = print_char(c, print);
    if (print->specifier_value == NULL)
        print->value_len = 0;
    else
        print->value_len = ft_strlen(print->specifier_value);
    // secret_case(print, print->specifier_value);
}
