/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parcer_wdt.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:18:02 by marvin            #+#    #+#             */
/*   Updated: 2021/11/23 20:18:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int parse_widht(char *format, t_print *print)
{
    int     r;

    r = 0;
    while ((format[r] >= 48 && format[r] <= 57))
        ++r;
	//write(1, "1", 1);
    print->is_zero = ft_substr(format, 0, r);
	//printf("%d", print->is_zero);
    return (r);
}