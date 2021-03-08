/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 13:01:48 by ebarguil          #+#    #+#             */
/*   Updated: 2021/03/08 15:04:38 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int		x;
	int		y;
	char	c;
	char	*s;
	int		i;
	int		d;

	x = 0;
	y = 0;
	printf("\n=====[ START TEST ]=====\n\n");
/*	printf("Test du %%c :\n\n");
	printf("%%%%\n\n");
	c = 'a';
	write(1, "ft_printf = [", 13);
	x = ft_printf("Salut %%");
	printf("]\n   printf = [");
	y = printf("Salut %%");
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	printf("%%*c (* = 5)\n\n");
	c += 1;
	write(1, "ft_printf = [", 13);
	x = ft_printf("%*c", 5, c);
	printf("]\n   printf = [");
	y = printf("%*c", 5, c);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	printf("%%5c\n\n");
	c += 1;
	write(1, "ft_printf = [", 13);
	x = ft_printf("%5c", c);
	printf("]\n   printf = [");
	y = printf("%5c", c);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	printf("%%05c\n\n");
	c += 1;
	write(1, "ft_printf = [", 13);
	x = ft_printf("%05c", c);
	printf("]\n   printf = [");
	y = printf("%05c", c);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	printf("%%-5c\n\n");
	c += 1;
	write(1, "ft_printf = [", 13);
	x = ft_printf("%-5c", c);
	printf("]\n   printf = [");
	y = printf("%-5c", c);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	printf("%%0-5c\n\n");
	c += 1;
	write(1, "ft_printf = [", 13);
	x = ft_printf("%0-5c", c);
	printf("]\n   printf = [");
	y = printf("%0-5c", c);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	printf("%%5.2c\n\n");
	c += 1;
	write(1, "ft_printf = [", 13);
	x = ft_printf("%5.2c", c);
	printf("]\n   printf = [");
	y = printf("%5.2c", c);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	printf("%%2.5c\n\n");
	c += 1;
	write(1, "ft_printf = [", 13);
	x = ft_printf("%2.5c", c);
	printf("]\n   printf = [");
	y = printf("%2.5c", c);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	printf("%%-c%%-c%%c* (1, '0', 0)\n\n");
	write(1, "ft_printf = [", 13);
	x = ft_printf("%-c%-c%c*", 1, '0', 0);
	printf("]\n   printf = [");
	y = printf("%-c%-c%c*", 1, '0', 0);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	printf("%%-c (1)\n\n");
	write(1, "ft_printf = [", 13);
	x = ft_printf("%-c", 1);
	printf("]\n   printf = [");
	y = printf("%-c", 1);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	printf("%%-c ('0')\n\n");
	write(1, "ft_printf = [", 13);
	x = ft_printf("%-c", '0');
	printf("]\n   printf = [");
	y = printf("%-c", '0');
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	printf("%%-c* (0)\n\n");
	write(1, "ft_printf = [", 13);
	x = ft_printf("%-c*", 0);
	printf("]\n   printf = [");
	y = printf("%-c*", 0);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);*/

/*	printf("Test du %%s :\n\n");
	printf("%%s\n\n");
	s = "salut les copains";
	write(1, "ft_printf = [", 13);
	x = ft_printf("%s", s);
	printf("]\n   printf = [");
	y = printf("%s", s);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	printf("%%.0s\n\n");
	s = "salut les copains";
	write(1, "ft_printf = [", 13);
	x = ft_printf("%.0s", s);
	printf("]\n   printf = [");
	y = printf("%.0s", s);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	printf("%%.10s\n\n");
	s = "salut les copains";
	write(1, "ft_printf = [", 13);
	x = ft_printf("%.10s", s);
	printf("]\n   printf = [");
	y = printf("%.10s", s);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	printf("%%.100s\n\n");
	s = "salut les copains";
	write(1, "ft_printf = [", 13);
	x = ft_printf("%.100s", s);
	printf("]\n   printf = [");
	y = printf("%.100s", s);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	printf("%%20s\n\n");
	s = "salut les copains";
	write(1, "ft_printf = [", 13);
	x = ft_printf("%20s", s);
	printf("]\n   printf = [");
	y = printf("%20s", s);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	printf("LOOOOL\n\n");
	s = "salut les copains";
	write(1, "ft_printf = [", 13);
	x = ft_printf("%*.3s", 10, "123");
	printf("]\n   printf = [");
	y = printf("%*.3s", 10, "123");
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	printf(" %%4s %%4s \n\n");
	s = "salut les copains";
	write(1, "ft_printf = [", 13);
	x = ft_printf(" %4s %4s ", "123", "4567");
	printf("]\n   printf = [");
	y = printf(" %4s %4s ", "123", "4567");
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);*/

	printf("Test du %%d/i :\n\n");
	d = 123;
	printf("%%d (%d)\n\n", d);
	write(1, "ft_printf = [", 13);
	x = ft_printf("%d", d);
	printf("]\n   printf = [");
	y = printf("%d", d);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	d = -123;
	printf("%%d (%d)\n\n", d);
	write(1, "ft_printf = [", 13);
	x = ft_printf("%d", d);
	printf("]\n   printf = [");
	y = printf("%d", d);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	d = 123;
	printf("%%10d (%d)\n\n", d);
	write(1, "ft_printf = [", 13);
	x = ft_printf("%10d", d);
	printf("]\n   printf = [");
	y = printf("%10d", d);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	d = -123;
	printf("%%10d (%d)\n\n", d);
	write(1, "ft_printf = [", 13);
	x = ft_printf("%10d", d);
	printf("]\n   printf = [");
	y = printf("%10d", d);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	d = 123;
	printf("%%010d (%d)\n\n", d);
	write(1, "ft_printf = [", 13);
	x = ft_printf("%010d", d);
	printf("]\n   printf = [");
	y = printf("%010d", d);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	d = -123;
	printf("%%010d (%d)\n\n", d);
	write(1, "ft_printf = [", 13);
	x = ft_printf("%010d", d);
	printf("]\n   printf = [");
	y = printf("%010d", d);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	d = 123;
	printf("%%-d (%d)\n\n", d);
	write(1, "ft_printf = [", 13);
	x = ft_printf("%-d", d);
	printf("]\n   printf = [");
	y = printf("%-d", d);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	d = -123;
	printf("%%-d (%d)\n\n", d);
	write(1, "ft_printf = [", 13);
	x = ft_printf("%-d", d);
	printf("]\n   printf = [");
	y = printf("%-d", d);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	d = 123;
	x = 0;
	printf("%%-10d (%d)\n\n", d);
	write(1, "ft_printf = [", 13);
	x = ft_printf("%-10d", d);
	printf("]\n   printf = [");
	y = printf("%-10d", d);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	d = -123;
	printf("%%-10d (%d)\n\n", d);
	write(1, "ft_printf = [", 13);
	x = ft_printf("%-10d", d);
	printf("]\n   printf = [");
	y = printf("%-10d", d);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	d = 123;
	printf("%%-010d (%d)\n\n", d);
	write(1, "ft_printf = [", 13);
	x = ft_printf("%-010d", d);
	printf("]\n   printf = [");
	y = printf("%-010d", d);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	d = -123;
	printf("%%-010d (%d)\n\n", d);
	write(1, "ft_printf = [", 13);
	x = ft_printf("%-010d", d);
	printf("]\n   printf = [");
	y = printf("%-010d", d);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	d = 123;
	printf("%%.10d (%d)\n\n", d);
	write(1, "ft_printf = [", 13);
	x = ft_printf("%.10d", d);
	printf("]\n   printf = [");
	y = printf("%.10d", d);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	d = -123;
	printf("%%.10d (%d)\n\n", d);
	write(1, "ft_printf = [", 13);
	x = ft_printf("%.10d", d);
	printf("]\n   printf = [");
	y = printf("%.10d", d);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	d = 123;
	printf("%%5.10d (%d)\n\n", d);
	write(1, "ft_printf = [", 13);
	x = ft_printf("%5.10d", d);
	printf("]\n   printf = [");
	y = printf("%5.10d", d);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	d = -123;
	printf("%%5.10d (%d)\n\n", d);
	write(1, "ft_printf = [", 13);
	x = ft_printf("%5.10d", d);
	printf("]\n   printf = [");
	y = printf("%5.10d", d);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	d = 123;
	printf("%%10.5d (%d)\n\n", d);
	write(1, "ft_printf = [", 13);
	x = ft_printf("%10.5d", d);
	printf("]\n   printf = [");
	y = printf("%10.5d", d);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	d = -123;
	printf("%%10.5d (%d)\n\n", d);
	write(1, "ft_printf = [", 13);
	x = ft_printf("%10.5d", d);
	printf("]\n   printf = [");
	y = printf("%10.5d", d);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	d = 123;
	printf("%%-10.5d (%d)\n\n", d);
	write(1, "ft_printf = [", 13);
	x = ft_printf("%-10.5d", d);
	printf("]\n   printf = [");
	y = printf("%-10.5d", d);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	d = -123;
	printf("%%-10.5d (%d)\n\n", d);
	write(1, "ft_printf = [", 13);
	x = ft_printf("%-10.5d", d);
	printf("]\n   printf = [");
	y = printf("%-10.5d", d);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	d = 123;
	printf("%%10.10d (%d)\n\n", d);
	write(1, "ft_printf = [", 13);
	x = ft_printf("%10.10d", d);
	printf("]\n   printf = [");
	y = printf("%10.10d", d);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	d = -123;
	printf("%%10.10d (%d)\n\n", d);
	write(1, "ft_printf = [", 13);
	x = ft_printf("%10.10d", d);
	printf("]\n   printf = [");
	y = printf("%10.10d", d);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	d = 0;
	printf("%%0*.0d (%d)\n\n", d);
	write(1, "ft_printf = [", 13);
	x = ft_printf("%0*.0d", -2, d);
	printf("]\n   printf = [");
	y = printf("%0*.0d", -2, d);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	d = -123;
	printf("%%2d (%d)\n\n", d);
	write(1, "ft_printf = [", 13);
	x = ft_printf("%2d", d);
	printf("]\n   printf = [");
	y = printf("%2d", d);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	d = 123;
	printf("%%.2d (%d)\n\n", d);
	write(1, "ft_printf = [", 13);
	x = ft_printf("%.2d", d);
	printf("]\n   printf = [");
	y = printf("%.2d", d);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	d = -123;
	printf("%%.2d (%d)\n\n", d);
	write(1, "ft_printf = [", 13);
	x = ft_printf("%.2d", d);
	printf("]\n   printf = [");
	y = printf("%.2d", d);
	printf("]\n\nRetour ft_printf = [%d]\nRetour    printf = [%d]\n\n========================\n\n", x, y);

	printf("\n\n=====[  END  TEST ]=====\n\n");
	return (0);
}
