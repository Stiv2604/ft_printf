/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_input_spec.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:34:40 by marvin            #+#    #+#             */
/*   Updated: 2021/11/23 20:34:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    format_input_spec(t_print *print)
{
    print->is_len += print->value_len;
    ft_putstr_len(print->specifier_value, print->value_len);
}
