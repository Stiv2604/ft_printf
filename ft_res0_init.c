/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_res0_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:22:00 by marvin            #+#    #+#             */
/*   Updated: 2021/11/23 20:22:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_init_print(t_print *print)                       
{
    print->is_widht = 0;///ширина
    print->is_precision = 0; ///точность
    print->precision = 0;
    print->null = 0;
    print->is_zero = 0;//заполнение нулями
    print->sign = 0;///положительный иили отрицательный знак
    print->is_len = 0;///общая длина
    print->is_minus = 0;//нулевое
    print->hash = 0;///тире
    print->space = 0;///пробелы
    print->specifier_value = NULL;
    print->specifier = 0;
    print->value_len = 0;
    return ;
}

void    rem_init(t_print *print)                       
{
    print->is_widht = 0;///ширина
    print->is_precision = 0; ///точность
    print->precision = 0;
    print->is_zero = 0;//заполнение нулями
    print->is_minus = 0;///положительный иили отрицательный знак
    print->null = 0;//нулево
    print->hash = 0;///тире
    print->space = 0;///пробелы
    print->sign = 0;
    ft_strdel(&print->specifier_value);
    print->specifier_value = NULL;
    print->specifier = 0;
    print->value_len = 0;
    return ;
}