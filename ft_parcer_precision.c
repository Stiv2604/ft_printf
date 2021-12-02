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
    //printf("%s", format);
    while ((format[r] >= '0' && format[r] <= '9'))
        r++;
    // if (r == 0)
    //     print->u_dot = 1;
    *print = ft_substr(format, 0, r);
    //printf("%d", *print);
    return (r);
}
