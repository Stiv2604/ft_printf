/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_zero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 20:31:46 by marvin            #+#    #+#             */
/*   Updated: 2021/11/24 20:31:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    format_zero(t_print *print)
{
    int tmp;

    tmp = 0;
    // if  (print->is_zero > print->value_len)
    // {
    //     print->specifier_value = ft_format(print, '0', &print->is_zero);
    //     print->value_len = print->is_zero;
    // }
    // if (print->is_zero > print->value_len && print->is_zero < print->precision)
    // {
    //     print->specifier_value = ft_format(print, '0', &print->is_zero);
    //     print->value_len = print->is_zero;
    // }
    if  (print->is_zero > print->value_len)
    {
        if (print->is_zero > print->value_len && print->is_zero < print->precision)
        {
            print->specifier_value = ft_format(print, '0', &print->is_zero);
            print->value_len = print->is_zero;
        }
        else if (print->is_zero > print->value_len && print->is_zero > print->precision && print->precision != 0)
        {
            print->specifier_value = ft_format(print, ' ', &print->is_zero);
            print->value_len = tmp + print->is_zero;
        }
        else
        {
            print->specifier_value = ft_format(print, '0', &print->is_zero);
            print->value_len = print->is_zero;
        }
    }
    return ;
}