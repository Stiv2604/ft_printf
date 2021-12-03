/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parcer_precision.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:29:14 by marvin            #+#    #+#             */
/*   Updated: 2021/11/23 20:29:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     parser_precision(char *format, int *print)
{
    int     r;

    r = 0;
    while ((format[r] >= '0' && format[r] <= '9'))
        r++;
    *print = ft_substr(format, 0, r);
    return (r);
}
