/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_precision.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:36:30 by marvin            #+#    #+#             */
/*   Updated: 2021/11/23 20:36:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    format_precision(t_print *print)
{
    if (print->specifier == 'i' || print->specifier == 'd')
        print->specifier_value = ft_format_p_id(print, &print->precision);
    if (print->specifier == 'x' || print->specifier == 'X')
        print->specifier_value = ft_format_p_upperx_lowerx(print, &print->precision);
    if (print->specifier == 's')
       print->specifier_value = ft_format_p_s(print, &print->precision);
    if (print->specifier == 'u')
        print->specifier_value = ft_format_p_u(print, &print->precision);
}
