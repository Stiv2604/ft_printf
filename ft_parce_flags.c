/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parce_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 20:47:38 by marvin            #+#    #+#             */
/*   Updated: 2021/11/24 20:47:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_parser_flag_zero(char *format, t_print *print)
{
    int i;

    i = 0;
    if ((format[i] >= 48 && format[i] <= 57))
        i += ft_parcer_null(format, print);
    //printf("_%u_", print->is_zero);
    //write(1, "1", 1);
    return (i);
}