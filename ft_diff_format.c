/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_diff_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 22:09:22 by marvin            #+#    #+#             */
/*   Updated: 2021/11/25 22:09:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    format_hash(t_print *print)
{
    char    c;

    c = '%';
    write(1, &c, 1);
    print->is_len++;
    return ;
}

void    format_null_str(t_print *print)
{
    write(1, "(null)", 6);
    print->is_len += 6;
    return ;
}

void    format_null(t_print *print)    
{
    write(1, "\0", 1);
	print->is_len++;
    return ;
}

void    format_minus_null(t_print *print)
{
    //printf("%d", print->is_len);
    write(1, "\0", 1);
    print->is_len = print->is_len + print->is_minus;
    return ;
}

int     diff_format(t_print *print)
{
    if (print->specifier == 'c' && print->null && !print->is_minus)
        format_null(print);
    else if (print->specifier == 'c' && print->is_minus && print->null)
        format_minus_null(print);
    else if (print->specifier == 's' && print->null)
        format_null_str(print);
    else if (print->specifier == '%' && print->hash)
        format_hash(print);
    else
        input(print);
    return (0);
}