/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:19:24 by marvin            #+#    #+#             */
/*   Updated: 2021/11/23 20:19:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_substr(char *s, unsigned int start, size_t len)
{
	int				r;
	size_t			i;
	char			*widht;
	
	r = 0;
	i = 0;
	widht = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!widht)
		return (-1);
	while (i < len)
	{
		widht[i] = s[i + start];
	 	i++;
	}
	widht[i++] = '\0';
	ft_atoi(widht, &r);
	free(widht);
	return (r);
}
