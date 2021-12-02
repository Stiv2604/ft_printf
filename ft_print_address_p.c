/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address_p.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:18:58 by marvin            #+#    #+#             */
/*   Updated: 2021/11/24 21:18:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int     lenght(unsigned long int n)
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

static int	ft_convert_hex(unsigned long int nb, char *str)
{
	char	        *r;
	int		        i;

	i = 0;
    r = str;
	while (nb > 0)
	{
			r[i++] = "0123456789abcdef"[nb % 16];
			nb /= 16;
	}
    r[i++] = 'x';
    r[i++] = '0';
    return (i);
}

static char    *ft_address(unsigned long int new)
{
    char    *str;
    int     tmp;
    int     xec;
    int     r;
    int     i;

    r = lenght(new);
    str = (char *)malloc(sizeof(char) * (r + 3));
    xec = ft_convert_hex(new, str);
    i = xec;
    r = 0;
    while (r < xec - 1)
	{
		tmp = str[xec - 1];
		str[xec - 1] = str[r];
		str[r] = tmp;
        xec--;
        r++;
	}
    str[i] = '\0';
    return (str);
}

char     *ft_print_address(unsigned long int new)
{
    char    *str;

    if (new == 0)
        return (NULL);
    str = ft_address(new);
    return (str);
}