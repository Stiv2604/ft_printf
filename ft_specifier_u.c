/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 23:36:24 by marvin            #+#    #+#             */
/*   Updated: 2021/11/23 23:36:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_specifier_u(t_print *print, va_list arg)
{
    if (print->specifier == 'u')
        print->specifier_value = ft_print_ud(va_arg(arg, unsigned int));
    print->value_len = print->specifier_value == NULL ? 0 : ft_strlen(print->specifier_value);
}
