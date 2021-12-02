/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:30:02 by marvin            #+#    #+#             */
/*   Updated: 2021/11/23 20:30:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_precision(char *format, t_print *print)
{
    int i;

    i = 0;
    if (format[i] == '.')
    {
        ++i;
        print->is_precision = 1;
        i += parser_precision((format + i), &print->precision);
    }
    else
    {
        print->is_precision = 0;
        print->precision = 0;
    }
    return (i);
}
