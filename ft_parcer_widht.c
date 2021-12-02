/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parcer_widht.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:35:35 by marvin            #+#    #+#             */
/*   Updated: 2021/11/30 16:35:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_parcer_widht(char *format, t_print *print)
{
    int     r;

    r = 0;
    while ((format[r] >= 48 && format[r] <= 57))
        ++r;
    print->is_widht = ft_substr(format, 0, r);
    return (r);
}