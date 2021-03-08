/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_all_nbr2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:26:41 by ebarguil          #+#    #+#             */
/*   Updated: 2021/03/04 12:17:49 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	nbr_preci_treat2(t_info *info, int x, int *y, char *s)
{
	if (info->tiret == 0)
	{
		y[1] = x;
		if (info->neg == -1)
			info->buf[y[1] - 1] = s[y[2]++];
		while (y[1] < (info->preci + x) - y[0])
			info->buf[y[1]++] = '0';
		while (s[y[2]])
			info->buf[y[1]++] = s[y[2]++];
	}
	else if (info->tiret == 1)
	{
		if (info->neg == -1)
			info->buf[y[1]++] = s[y[2]++];
		while (y[1] < info->preci - (info->neg == -1 ? y[0] - 1 : y[0]))
			info->buf[y[1]++] = '0';
		while (s[y[2]])
			info->buf[y[1]++] = s[y[2]++];
	}
	free(s);
	return (print_str(info));
}

int	nbr_preci_treat(t_info *info, int x, int *y, char *s)
{
	if (info->preci <= y[0] && info->width <= y[0])
		while (s[y[1]])
			info->buf[y[2]++] = s[y[1]++];
	else if (info->width <= info->preci)
	{
		if (info->neg == -1)
			info->buf[x++] = s[y[1]++];
		while (x < info->preci - (info->neg == -1 ? y[0] - 1 : y[0]))
			info->buf[x++] = '0';
		while (s[y[1]])
			info->buf[x++] = s[y[1]++];
	}
	else if (info->tiret == 0 || info->tiret == 1)
		return (nbr_preci_treat2(info, x, y, s));
	free(s);
	return (print_str(info));
}

int	nbr_nopreci_treat2(t_info *info, int *y, char *s)
{
	if (info->tiret == 0)
	{
		y[1] = info->width - (info->neg == -1 ? y[0] + 1 : y[0]);
		if (y[1] < 0)
			y[1] = 0;
		while (s[y[2]])
			info->buf[y[1]++] = s[y[2]++];
	}
	else if (info->tiret == 1)
	{
		if (info->neg == -1)
			info->buf[y[1]++] = s[y[2]++];
		while (y[1] < info->preci - (info->neg == -1 ? y[0] - 1 : y[0]))
			info->buf[y[1]++] = '0';
		while (s[y[2]])
			info->buf[y[1]++] = s[y[2]++];
	}
	free(s);
	return (print_str(info));
}

int	nbr_nopreci_treat(t_info *info, int *y, char *s)
{
	if (info->preci <= y[0] && info->width <= y[0])
		while (s[y[1]])
			info->buf[y[2]++] = s[y[1]++];
	else if (info->zero == 1 && info->neg == -1)
	{
		y[1] = info->width - y[0];
		info->buf[0] = s[y[2]++];
		while (s[y[2]])
			info->buf[y[1]++] = s[y[2]++];
	}
	else if (info->tiret == 0 || info->tiret == 1)
		return (nbr_nopreci_treat2(info, y, s));
	free(s);
	return (print_str(info));
}
