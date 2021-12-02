/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:24:03 by marvin            #+#    #+#             */
/*   Updated: 2021/11/23 20:24:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strnew(size_t size, t_print *print)
{
	size_t	i;
	char	*new;

	i = 0;
	if ((print->specifier == 's' || print->specifier == 'd' 
		|| print->specifier == 'i') && print->space)
		size++;
	new = (char *)malloc((size + 1) * sizeof(char));
	if (!new)
		return (NULL);
	else
	{
		while (i < size)
		{
			new[i] = '\0';
			i++;
		}
		new[i] = '\0';
		return (new);
	}
	return (NULL);
}
