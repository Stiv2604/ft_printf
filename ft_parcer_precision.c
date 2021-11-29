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
    char    *precision;

    r = 0;
	(void)print;
	precision = NULL;
    while ((format[r] >= '1' && format[r] <= '9'))
        r++;
    //printf("f and r |%s| %d\n", format, r);
    //precision = ft_substr(format, 0, r, precision);
    //printf("pre %s", precision);
    //*print = ft_atoi(precision);
    free(precision);
    precision = NULL;
    //printf("prescision %d|", *print);
    return (r);
}
