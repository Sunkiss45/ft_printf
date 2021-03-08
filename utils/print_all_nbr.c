/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_all_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 10:13:36 by ebarguil          #+#    #+#             */
/*   Updated: 2021/03/03 12:30:19 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	nbr_buf_treat_u(t_info *info, int x, unsigned int d, char *s)
{
	int	y[3];

	y[0] = info->neg == -1 ? ft_strlen(s) - 1 : ft_strlen(s);
	y[1] = 0;
	y[2] = 0;
	if (info->zero == 1 && info->width > 0)
		while (y[1] < info->width)
			info->buf[y[1]++] = '0';
	else if (info->zero == 0 && info->width > 0)
		while (y[1] < info->width)
			info->buf[y[1]++] = ' ';
	if (info->preci == 0 && d == 0)
	{
		free(s);
		return (print_str(info));
	}
	y[1] = 0;
	if (info->preci == -1 || info->preci == 0 || info->preci < y[0])
		return (nbr_nopreci_treat(info, y, s));
	else
		return (nbr_preci_treat(info, x, y, s));
}

int	nbr_buf_treat_i(t_info *info, int x, int d, char *s)
{
	int	y[3];

	y[0] = info->neg == -1 ? ft_strlen(s) - 1 : ft_strlen(s);
	y[1] = 0;
	y[2] = 0;
	if (info->zero == 1 && info->width > 0)
		while (y[1] < info->width)
			info->buf[y[1]++] = '0';
	else if (info->zero == 0 && info->width > 0)
		while (y[1] < info->width)
			info->buf[y[1]++] = ' ';
	if (info->preci == 0 && d == 0)
	{
		free(s);
		return (print_str(info));
	}
	y[1] = 0;
	if (info->preci == -1 || info->preci == 0 || info->preci < y[0])
		return (nbr_nopreci_treat(info, y, s));
	else
		return (nbr_preci_treat(info, x, y, s));
}

int	print_ap_nbr(unsigned long long d, t_info *info)
{
	int	x;

	ft_bzero(info->buf, BUF_S);
	if (info->width == 0 && info->preci == 0 && d == 0)
		return (0);
	if ((info->type == 'd' || info->type == 'i') && (int)d < 0)
		info->neg = -1;
	x = info->width - info->preci;
	if (x < 0)
		x = 0;
	if (info->type == 'u')
		return (nbr_buf_treat_u(info, x, (unsigned int)d, ft_itoa_u(d)));
	else
		return (nbr_buf_treat_i(info, x, d, ft_itoa(d)));
}
