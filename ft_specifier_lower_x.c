/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_lower_x.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 23:54:06 by marvin            #+#    #+#             */
/*   Updated: 2021/11/23 23:54:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_specifier_lower_x(t_print *print, va_list arg)
{
    if (print->specifier == 'x')
        print->specifier_value = ft_print_lower_x(va_arg(arg, unsigned int), print);
    if (print->specifier_value == NULL)
        print->value_len = 0;
    else
        print->value_len = ft_strlen(print->specifier_value);
}
