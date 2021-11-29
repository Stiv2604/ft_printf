/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:00:53 by marvin            #+#    #+#             */
/*   Updated: 2021/11/23 21:00:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_parcer_flags(char *format, t_print *print)
{
    int     i;

    i = 0;
    if (format[i] == '-')
    {
        i += ft_parcer_minus(format, print);
    }
    else if (format[i] == '0')
    {
        if ((format[i] >= 48 && format[i] <= 57))
            i += parse_widht(format, print);
    }
    else if (format[i] == '+')
    {
        i++;
        print->sign = 1;
    }
    else if (format[i] == ' ')
    {
        i++;
        print->space = 1;
    }
    // else if (format[i] == '+')
    // {}
    return (i);
}