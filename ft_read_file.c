/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:38:05 by marvin            #+#    #+#             */
/*   Updated: 2021/11/23 20:38:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_read_file(t_print *print, va_list arg, char *format)
{
    size_t     i;
    int         res;

    i = 0;
    while (format[i])
    {
        if (format[i] == '%')
        {
            ++i;
            rem_init(print);
            i += type_solve(arg, (format + i), print);
            if (diff_format(print))
                return ;
        }
        res = 0;
        while (format[i] != '%' && format[i])
        {
            ++print->is_len;
            ++res;
            ++i;
        }
        ft_putstr_len((format + i - res), res);
    }
}