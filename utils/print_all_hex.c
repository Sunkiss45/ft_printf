/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_all_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 11:22:35 by ebarguil          #+#    #+#             */
/*   Updated: 2021/03/05 15:05:45 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

#include <stdio.h>

int	hex_p_convert(t_info *info, int x, unsigned long long nbr, char *base)
{
	unsigned long long	tmp;
	char				*s;
	int					count;
	int					i;

	tmp = nbr;
	i = 0;
	count = ft_nbrlen_llu(nbr, 16);
	if (!(s = malloc(sizeof(char) * count + 3)))
		return (0);
	ft_bzero(s, count + 3);
	s[0] = '0';
	s[1] = 'x';
	i = (count + 2) - 1;
	if (tmp == 0)
	{
		s[2] = '0';
		return (nbr_buf_treat_u(info, x, nbr, s));
	}
	while (i >= 2)
	{
		s[i--] = base[tmp % 16];
		tmp /= 16;
	}
	return (nbr_buf_treat_u(info, x, nbr, s));
}

int	print_ap_hex_p(unsigned long long nbr, t_info *info)
{
	int	x;

	ft_bzero(info->buf, BUF_S);
	if (info->width == 0 && info->preci == 0 && nbr == 0)
		return (0);
	x = info->width - info->preci;
	if (x < 0)
		x = 0;
	return (hex_p_convert(info, x, nbr, HEX_X));
}

int	hex_convert(t_info *info, int x, unsigned int nbr, char *base)
{
	unsigned int	tmp;
	char			*s;
	int				count;
	int				i;

	tmp = nbr;
	i = 0;
	count = ft_nbrlen_u(nbr, 16);
	if (!(s = malloc(sizeof(char) * count)))
		return (0);
	ft_bzero(s, count + 1);
	i = count - 1;
	if (tmp == 0)
	{
		s[0] = '0';
		return (nbr_buf_treat_u(info, x, nbr, s));
	}
	while (i >= 0)
	{
		s[i--] = base[tmp % 16];
		tmp /= 16;
	}
	return (nbr_buf_treat_u(info, x, nbr, s));
}

int	print_ap_hex(unsigned int nbr, t_info *info)
{
	int	x;

	ft_bzero(info->buf, BUF_S);
	if (info->width == 0 && info->preci == 0 && nbr == 0)
		return (0);
	x = info->width - info->preci;
	if (x < 0)
		x = 0;
	if (info->type == 'x')
		return (hex_convert(info, x, nbr, HEX_X));
	else
		return (hex_convert(info, x, nbr, HEX_XX));
}
