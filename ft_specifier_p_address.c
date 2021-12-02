/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_p_address.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:16:47 by marvin            #+#    #+#             */
/*   Updated: 2021/11/24 21:16:47 by marvin           ###   ########.fr       */
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

void    secret_case2(t_print *print, char*str)
{
    if (print->specifier == 'p')
    {
        if (ft_str(str) == 1)
            print->null = 1;
        else
            print->null = 0;
    }
	return ;
}

void ft_specifier_p_address(t_print *print, va_list arg)
{
    if (print->specifier == 'p')
        print->specifier_value = ft_print_address(va_arg(arg, unsigned long int));
    //print->value_len = print->specifier_value == NULL ? 0 : ft_strlen(print->specifier_value);
    if (print->specifier_value == NULL)
        print->value_len = 0;
    else
        print->value_len = ft_strlen(print->specifier_value);
    secret_case2(print, print->specifier_value);
}