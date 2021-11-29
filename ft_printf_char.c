/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:03:14 by marvin            #+#    #+#             */
/*   Updated: 2021/11/19 18:03:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

char     *print_char(char c, t_print *print)
{
    char    *str;

    str = ft_strnew(1, print);
    str[0] = c;
    return (str);
}