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

void    format_null_str_next(t_print *print)
{
    if (print->is_widht > 6)
    {
        print->is_widht = print->is_widht - 6;
        print->is_len = print->is_widht;
        while (print->is_widht > 0)
        {
            write(1, " ", 1);
            print->is_widht--;
        }
        write(1, "(null)", 6);
        print->is_len += 6;
    }
    return ;
}

void    format_null_str(t_print *print)
{
    if (print->is_widht <= 6 && print->precision == 0)
    {
        write(1, "(null)", 6);
        print->is_len += 6;
        return ;
    }
    else if (print->precision >= 6 && print->is_widht == 0)
    {
        write(1, "(null)", 6);
        print->is_len += 6;
        return ;
    }
    else if (print->is_widht == 0 && print->precision <= 6)
    {
        print->is_len += 0;
        return ;
    }
    else
        format_null_str_next(print);
    return ;
}

void    format_null_pointer(t_print *print)
{
    if (print->is_widht <= 5)
    {
        write(1, "(nil)", 5);
        print->is_len += 5;
        return ;
    }
    if (print->is_widht > 5)
    {
        print->is_widht = print->is_widht - 5;
        print->is_len += print->is_widht;
        while (print->is_widht > 0)
        {
            write(1, " ", 1);
            print->is_widht--;
        }
        write(1, "(nil)", 5);
        print->is_len += 5;
    }
    return ;
}

void    format_id_precision(t_print *print)
{
    if (ft_strlen(print->specifier_value) == 1)
    {
        if (print->dot_zero == 1 && print->is_minus != 0)
        {
            print->is_len += print->is_minus;
            while(print->is_minus > 0 || print->is_zero > 0)
            {
                write(1, " ", 1);
                print->is_minus--;
            }
        }
        if (print->dot_zero == 1 && print->is_minus == 0 && print->is_zero != 0)
        {
            print->is_len += print->is_zero;
            while(print->is_zero > 0)
            {
                write(1, " ", 1);
                print->is_zero--;
            }
        }
        if (print->dot_zero == 1 && print->is_minus == 0)
            print->is_len += 0;
    }
    return ;
}

int     diff_format(t_print *print)
{
    // if (print->specifier == 'c' && print->null && print->is_minus == 0)
    //     format_null(print);
    // else if (print->specifier == 'c' && print->is_minus && print->null)
    //     format_minus_null(print);
    if (print->specifier == 's' && print->null)
        format_null_str(print);
    else if (print->specifier == '%' && print->hash)
        format_hash(print);
    else if (print->specifier == 'p' && print->null)
        format_null_pointer(print);
    else if ((print->specifier == 'i' || print->specifier == 'd') && print->dot_zero == 1 && print->precision == 0)
        format_id_precision(print);
    else
        input(print);
    return (0);
}