/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_i_d.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:28:09 by marvin            #+#    #+#             */
/*   Updated: 2021/11/23 20:28:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_specifier_i_d(t_print *print, va_list arg)
{
    if (print->specifier == 'i' || print->specifier == 'd')
        print->specifier_value = print_i_d(va_arg(arg, int), print);
    //print->value_len = print->specifier_value == NULL ? 0 : ft_strlen(print->specifier_value);
    if (print->specifier_value == NULL)
        print->value_len = 0;
    else
        print->value_len = ft_strlen(print->specifier_value);
}
