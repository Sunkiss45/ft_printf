/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_all_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 09:51:29 by ebarguil          #+#    #+#             */
/*   Updated: 2021/02/24 13:25:56 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_char(char c)
{
	return (write(1, &c, 1));
}

int	print_str(t_info *info)
{
	int	add;

	add = 0;
	if (info->type == 'c')
		return (write(1, info->buf, info->width));
	else
		while (info->buf[add] != '\0')
			add += print_char(info->buf[add]);
	return (add);
}

int	print_ap_char(int c, t_info *info)
{
	int	i;

	ft_bzero(info->buf, BUF_S);
	i = 0;
	if (info->zero == 0)
		while (i < info->width)
			info->buf[i++] = ' ';
	else
		while (i < info->width)
			info->buf[i++] = '0';
	if (info->width != 0 && info->tiret == 0)
		info->buf[info->width - 1] = c;
	else
		info->buf[0] = c;
	if (info->width == 0)
		info->width++;
	return (print_str(info));
}
