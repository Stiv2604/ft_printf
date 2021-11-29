/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 21:15:09 by marvin            #+#    #+#             */
/*   Updated: 2021/11/25 21:15:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_strcmp(char *s1, char *s2)
{
	unsigned char *cs1;
	unsigned char *cs2;

	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	if (!cs1 && !cs2)
		return (0);
	while (*cs1 == *cs2)
	{
		cs1++;
		cs2++;
		if (!*cs1 && !*cs2)
			return (0);
	}
	return (*cs1 - *cs2);
}
