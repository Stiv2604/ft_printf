/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:31:08 by marvin            #+#    #+#             */
/*   Updated: 2021/11/23 20:31:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_memset(void *s, int c, int len)
{
	unsigned char *str;

	str = (unsigned char *)s;
	while (len > 0)
	{
		*str = (unsigned char)c;
		str++;
		len--;
	}
	//*str = '\0';
	return (s);
}