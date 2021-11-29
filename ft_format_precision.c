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
    //write(1, "1", 1);
    print->specifier_value = ft_format_p(print, &print->precision);
    //printf("%s",print->specifier_value);
}
