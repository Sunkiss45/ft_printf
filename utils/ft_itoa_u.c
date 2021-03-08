/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 16:09:42 by ebarguil          #+#    #+#             */
/*   Updated: 2021/03/02 16:14:32 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		ft_abs_u(unsigned int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

int		ft_nbr_len_u(unsigned int n)
{
	int	count;

	if (n <= 0)
		count = 1;
	else
		count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

int		is_neg_u(unsigned int n)
{
	if (n < 0)
		return (-1);
	else
		return (1);
}

char	*ft_itoa_u(unsigned int n)
{
	char	*s;
	int		neg;
	int		count;

	neg = is_neg_u(n);
	count = ft_nbr_len_u(n);
	if (!(s = malloc(sizeof(char) * count + 1)))
		return (NULL);
	s[count] = '\0';
	count--;
	while (count >= 0)
	{
		s[count] = ft_abs_u(n % 10) + '0';
		n = ft_abs_u(n / 10);
		count--;
	}
	if (neg == -1)
		s[0] = '-';
	return (s);
}
