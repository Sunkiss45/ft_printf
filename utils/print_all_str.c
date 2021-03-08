/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_all_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 13:34:34 by ebarguil          #+#    #+#             */
/*   Updated: 2021/02/24 12:30:21 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>

int	str_null(t_info *info)
{
	int		x;
	char	*nul;

	x = 0;
	nul = "(null)";
	while (x < 6)
	{
		info->buf[x] = nul[x];
		x++;
	}
	return (print_str(info));
}

int	str_width_with_preci(char *s, t_info *info)
{
	int	x;

	x = 0;
	if (info->preci <= ft_strlen(s))
		x = (info->width - info->preci);
	else
		x = (info->width - info->preci) + (info->preci - ft_strlen(s));
	if (info->tiret == 1)
		x = 0;
	return (str_preci(s, info, x));
}

int	str_width(char *s, t_info *info)
{
	int	x;

	x = 0;
	while (x < info->width)
		info->buf[x++] = ' ';
	x = 0;
	if (!s)
		s = "(null)\0";
	if (info->preci == -1 && info->width > ft_strlen(s))
	{
		x = (info->width - ft_strlen(s));
		if (info->tiret == 1)
			x = 0;
		return (str_preci(s, info, x));
	}
	else if (info->preci < info->width && info->width > ft_strlen(s))
	{
		return (str_width_with_preci(s, info));
	}
	else
	{
		return (str_preci(s, info, x));
	}
}

int	str_preci(char *s, t_info *info, int x)
{
	int	i;

	i = 0;
	if (!s)
		s = "(null)\0";
	if (info->preci > 0)
	{
		while (s[i] && i < info->preci)
			info->buf[x++] = s[i++];
		return (print_str(info));
	}
	else if (info->preci <= -1)
	{
		while (s[i])
			info->buf[x++] = s[i++];
		return (print_str(info));
	}
	else
	{
		return (print_str(info));
	}
}

int	print_ap_str(char *s, t_info *info)
{
	ft_bzero(info->buf, BUF_S);
	if (info->width > info->preci && info->width > 0)
		return (str_width(s, info));
	else
		return (str_preci(s, info, 0));
}
