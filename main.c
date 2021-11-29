/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:59:30 by marvin            #+#    #+#             */
/*   Updated: 2021/11/19 17:59:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "limits.h"
#include "ft_printf.h"

int main(void)
{
    int p1;
    int p2;
    char    a;
    char *s2 = "Mussum Ipsum, cacilds vidis litro abertis. Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. Aenean sit amet nisi. Atirei o pau no gatis, per gatis num morreus.";

    p1 = p2 = 0;
    a = 'A';
    p1 = printf(" % d ", -101);
    printf("\n");
    p2 = ft_printf(" % d ", -101);
    if (p1 == p2)
    {
        ft_printf("\n");
        ft_printf("////////////////////////////TRUE///////////////////////////////");
        ft_printf("\n");
        ft_printf("%d and %d\n", p1, p2);
    }
    else
    {
        ft_printf("\n");
        ft_printf("////////////////////////////FALSE///////////////////////////////");
        ft_printf("\n");
        ft_printf("%d and %d\n", p1, p2);
    }
	//getchar();
    // printf(" %c %c %c ", '2', '1', 0);
    // printf("\n");
    // ft_printf("%.3i %.5d %5x %5X %.5d _%8s_ %c %.3i %.5x %.5X %5X %5x %03i %02i %03d %02d %05x %05X %018u %05u %p %18p %.4s %.5s %10.3d", 12, 13, 0, 42, 123, "abcd", 'A', 12, 0, 42, 0, 42, 12, 12, 13, 13, 42, 42, -123, 123, &a, &a, "abcd", "abcdef", 12);
}

// void* my_malloc(size_t size, const char *file, int line, const char *func)
// {
// 	#undef malloc
//     void *p = malloc(size);
// 	#define malloc(X) my_malloc( X, __FILE__, __LINE__, __FUNCTION__)
//     printf("Allocated = %s, %i, %s, %p[%li]\n", file, line, func, p, size);

//     return p;
// }

// void my_free(void *p, const char *file, int line, const char *func)
// {
// 	#undef free
// 	free(p);
// 	#define free(X) my_free(X, __FILE__, __LINE__, __FUNCTION__)
//     printf("Fried = %s, %i, %s, %p\n", file, line, func, p);
// }

// int main()
// {
// 	ft_printf(" %04d ", 9);
// 	getchar();
// 	return (0);
// }