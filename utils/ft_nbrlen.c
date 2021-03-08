/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:07:31 by ebarguil          #+#    #+#             */
/*   Updated: 2021/03/05 15:05:46 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_nbrlen_llu(unsigned long long d, int len)
{
	int i;

	i = 0;
	if (d == 0)
		return (1);
	while (d > 0)
	{
		d /= len;
		i++;
	}
	return (i);
}

int	ft_nbrlen_u(unsigned int d, int len)
{
	int i;

	i = 0;
	if (d == 0)
		return (1);
	while (d > 0)
	{
		d /= len;
		i++;
	}
	return (i);
}
