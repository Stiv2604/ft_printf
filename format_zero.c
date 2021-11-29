/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_zero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 20:31:46 by marvin            #+#    #+#             */
/*   Updated: 2021/11/24 20:31:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    format_zero(t_print *print)
{
    //printf("len %d_%d_", print->value_len, print->is_zero);
	//write(1, &print->is_zero, 1);
    if (print->is_zero > print->value_len)
    {
		//write(1, "1", 1);
        print->specifier_value = ft_format(print, '0', &print->is_zero);
        //printf("_%s_", print->specifier_value);
        print->value_len = print->is_zero;
    }
    return ;
}