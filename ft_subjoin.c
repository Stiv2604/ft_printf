/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_subjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:31:39 by marvin            #+#    #+#             */
/*   Updated: 2021/11/23 20:31:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_subjoin(char *s1, char *s2, unsigned int s2_start)
{
	size_t	s1l;
	size_t	s2l;
	char	*new;

	s1l = ft_strlen(s1);
	s2l = ft_strlen(s2) - s2_start;
	if (!(new = (char *)malloc((s1l + s2l + 1) * sizeof(char))))
		return (NULL);
	if (*s1 == '-')
	{
		*new++ = '-';
		s1++;
	}
	while (*s2)
		*new++ = *s2++;
	s1 += s2_start;
	while (*s1)
		*new++ = *s1++;
	*new = '\0';
	return (new - (s1l + s2l));
}
