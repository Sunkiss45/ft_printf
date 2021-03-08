/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 14:51:22 by ebarguil          #+#    #+#             */
/*   Updated: 2021/03/03 13:58:42 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

t_info	*flag_init(t_info *info)
{
	info->zero = 0;
	info->tiret = 0;
	info->star = 0;
	info->preci = -1;
	info->width = 0;
	info->neg = 1;
	return (info);
}
