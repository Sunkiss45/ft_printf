/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 14:14:32 by ebarguil          #+#    #+#             */
/*   Updated: 2021/03/05 13:44:11 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_type_this(t_info *info, va_list ap)
{
	int		add;
	char	var;

	add = 0;
	var = info->type;
	if (var == '%')
		add += print_ap_char('%', info);
	else if (var == 'c')
		add += print_ap_char(va_arg(ap, int), info);
	else if (var == 's')
		add += print_ap_str(va_arg(ap, char *), info);
	else if (var == 'i' || var == 'd')
		add += print_ap_nbr(va_arg(ap, int), info);
	else if (var == 'u')
		add += print_ap_nbr(va_arg(ap, unsigned int), info);
	else if (var == 'x' || var == 'X')
		add += print_ap_hex(va_arg(ap, unsigned int), info);
	else if (var == 'p')
		add += print_ap_hex_p(va_arg(ap, unsigned long long), info);
	return (add);
}

void	ft_width_star(char *input, int i, t_info *info, va_list ap)
{
	if (ft_isdigit(input[i]))
	{
		if (info->preci == -1)
			info->width = info->width * 10 + (input[i] - 48);
		else
			info->preci = info->preci * 10 + (input[i] - 48);
	}
	else
	{
		if (info->preci == -1)
		{
			info->width = va_arg(ap, int);
			if (info->width < 0)
			{
				info->tiret = 1;
				info->width *= -1;
			}
		}
		else
			info->preci = va_arg(ap, int);
	}
}

void	ft_flag_this(char *input, int i, t_info *info, va_list ap)
{
	if (input[i] == '0' && info->width == 0 && info->preci == -1)
		info->zero = 1;
	else if (input[i] == '-')
		info->tiret = 1;
	else if (input[i] == '.')
		info->preci = 0;
	else if (input[i] == '*' || ft_isdigit(input[i]))
		ft_width_star(input, i, info, ap);
}

int		ft_parse_this(char *input, va_list ap)
{
	int		add;
	int		i;
	t_info	*info;

	if (!(info = (t_info *)malloc(sizeof(t_info) * 1)))
		return (-1);
	i = 0;
	add = 0;
	while (input[i] != '\0')
	{
		while (input[i] && input[i] != '%')
			add += print_char(input[i++]);
		if (input[i] == '%')
		{
			info = flag_init(info);
			while (input[++i] && !(ft_strchr(TYPES, input[i])))
				ft_flag_this(input, i, info, ap);
			info->type = input[i++];
			if (info->tiret == 1 || info->preci > -1)
				info->zero = 0;
			add += ft_type_this(info, ap);
		}
	}
	free(info);
	return (add);
}

int		ft_printf(const char *input, ...)
{
	int		add;
	va_list	ap;

	va_start(ap, input);
	add = ft_parse_this((char *)input, ap);
	va_end(ap);
	return (add);
}
