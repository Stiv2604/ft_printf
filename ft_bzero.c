/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:35:20 by marvin            #+#    #+#             */
/*   Updated: 2021/11/23 20:35:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char    *ft_bzero(void *dest, size_t len)
{
    size_t              i;
    unsigned char       *new_dest;

    i = 0;
    new_dest = dest;
    while(i < len)
    {
        *new_dest = 0;
        new_dest++;
        i++; 
    }
    return(dest);
}
