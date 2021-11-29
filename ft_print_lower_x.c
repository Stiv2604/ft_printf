/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lower_x.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 23:57:38 by marvin            #+#    #+#             */
/*   Updated: 2021/11/23 23:57:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int     lenght(unsigned int n)
{
	size_t	len;

	len = 1;
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static int  ft_convert_hex(unsigned int nb, char *str)
{
	char	*r;
	int		i;

	i = 0;
    r = str;
	if (nb == 0)
		r[i++] = '0';
	while (nb > 0)
	{
			r[i++] = "0123456789abcdef"[nb % 16];
			nb /= 16;
	}
    //printf("%lu", nb);
    return (i);
}

char    *ft_print_lower_x(unsigned int new)
{
    char    *str;
    int     xec;
    int     r;
    int     tmp;
    int     k; 

    k = 0;
    r = lenght(new);
    str = (char *)malloc(sizeof(char) * (r + 1));
    xec = ft_convert_hex(new, str);
    r = xec;
    while (k < xec - 1)
	{
		tmp = str[xec - 1];
		str[xec - 1] = str[k];
		str[k] = tmp;
        xec--;
        k++;
	}
    str[r] = '\0';
    //printf(" lower _%s_\n", str);
    return (str);
}
