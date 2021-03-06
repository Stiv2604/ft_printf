/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parcer_minus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:51:45 by marvin            #+#    #+#             */
/*   Updated: 2021/11/29 15:51:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_parcer_minus(char *format, t_print *print)
{
    int     r;
    int     m;

    r = 0;
    while (format[r] == '-')
        r++;
    m = r;
    while ((format[r] >= 48 && format[r] <= 57))
        r++;
    print->is_minus = ft_substr(format, m, r);
    return (r);
}