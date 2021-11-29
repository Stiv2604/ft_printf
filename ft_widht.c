/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_widht.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:30:30 by marvin            #+#    #+#             */
/*   Updated: 2021/11/23 20:30:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_widht(char *format, t_print *print)
{
    int i;

    i = 0;
    if ((format[i] >= 48 && format[i] <= 57))
        i += parse_widht(format, print);
    //printf("_%d_", print->is_widht);
    return (i);
}
