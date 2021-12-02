/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_upper_x.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 00:03:59 by marvin            #+#    #+#             */
/*   Updated: 2021/11/24 00:03:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_specifier_upper_x(t_print *print, va_list arg)
{
    if (print->specifier == 'X')
        print->specifier_value = ft_print_upper_x(va_arg(arg, unsigned int), print);
    //print->value_len = print->specifier_value == NULL ? 0 : ft_strlen(print->specifier_value);
    if (print->specifier_value == NULL)
        print->value_len = 0;
    else
        print->value_len = ft_strlen(print->specifier_value);
}
