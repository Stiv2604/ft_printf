/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:25:50 by marvin            #+#    #+#             */
/*   Updated: 2021/11/23 20:25:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char    *print_string(char *str, t_print *print)
{
    int     res;
    char    *new;
    int     i;
    
    res = 0;
    i = 0;
    res = ft_strlen(str);
    new = ft_strnew(res, print);
    if (print->space && res != 0)
        new[i] = ' ';
    while (res > i)
    {
        new[i] = str[i];
        i++;
    }
    return (new);
}
