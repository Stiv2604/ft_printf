/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_solve.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:33:56 by marvin            #+#    #+#             */
/*   Updated: 2021/11/23 20:33:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     type_solve(va_list arg, char *format, t_print *print)
{
    int     i;

    i = 0;
    i += ft_parcer_flags((format + i), print);
    i += ft_widht((format + i), print);
    i += ft_precision((format + i), print);
    i += ft_parse_specifier(arg, (format + i), print);
    return (i);
}
