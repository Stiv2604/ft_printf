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

void ft_specifier_p_address(t_print *print, va_list arg)
{
    if (print->specifier == 'p')
        print->specifier_value = ft_print_address(va_arg(arg, unsigned long int));
    print->value_len = print->specifier_value == NULL ? 0 : ft_strlen(print->specifier_value);
}