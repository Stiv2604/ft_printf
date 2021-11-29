/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_s.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:26:32 by marvin            #+#    #+#             */
/*   Updated: 2021/11/23 20:26:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int      ft_case_s(char  *str)
{
    int flg;
    
    if (!str)
        flg = 1;
    else
        flg = 0;
    return (flg);
}

static void    secret_case_s(t_print *print, char *str)
{
    if (print->specifier == 's')
    {
        if (ft_case_s(str) == 1)
            print->null = 1;
        else
            print->null = 0;
    }
}

void    ft_specifier_s(t_print *print, va_list arg)
{
    char    *str;

    str = va_arg(arg, char *);
    if (print->specifier == 's' && str != NULL)
        print->specifier_value = print_string(str, print); 
    print->value_len = print->specifier_value == NULL ? 0 : ft_strlen(print->specifier_value);
    secret_case_s(print, print->specifier_value);
}
