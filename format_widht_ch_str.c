/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_widht_ch_str.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:33:00 by marvin            #+#    #+#             */
/*   Updated: 2021/11/23 20:33:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    format_widht_ch_str(t_print *print)
{
    //printf("len %ld_%d_", print->value_len, print->is_widht);
    if (print->is_widht > print->value_len)
    {
       // write(1, "1", 1);
        print->specifier_value = ft_format(print, ' ', &print->is_widht);
        //printf("_%s_", print->specifier_value);
        print->value_len = print->is_widht;
    }
    return ;
}