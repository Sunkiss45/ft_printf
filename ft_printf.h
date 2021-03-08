/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 15:01:47 by ebarguil          #+#    #+#             */
/*   Updated: 2021/03/03 15:09:53 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

# define HEX_X "0123456789abcdef"
# define HEX_XX "0123456789ABCDEF"
# define BUF_S 16384
# define TYPES "cspdiuxX%"

typedef struct	s_info
{
	char		type;
	char		buf[BUF_S];
	int			zero;
	int			tiret;
	int			star;
	int			preci;
	int			width;
	int			base;
	int			neg;
}				t_info;

t_info			*flag_init(t_info *info);

int				ft_type_this(t_info *info, va_list ap);
void			ft_width_star(char *input, int i, t_info *info, va_list ap);
void			ft_flag_this(char *input, int i, t_info *info, va_list ap);
int				ft_parse_this(char *input, va_list ap);
int				ft_printf(const char *input, ...);

int				print_ap_hex(unsigned int nbr, t_info *info);
int				print_ap_hex_p(unsigned long long nbr, t_info *info);
int				print_ap_nbr(unsigned long long d, t_info *info);
int				print_ap_str(char *s, t_info *info);
int				print_ap_char(int c, t_info *info);

void			print_nbr(int d);
int				print_str(t_info *info);
int				print_char(char c);
int				nbr_preci_treat(t_info *info, int x, int *y, char *s);
int				nbr_nopreci_treat(t_info *info, int *y, char *s);
int				nbr_buf_treat_u(t_info *info, int x, unsigned int d, char *s);
int				nbr_buf_treat_i(t_info *info, int x, int d, char *s);
int				str_width_with_preci(char *s, t_info *info);
int				str_width(char *s, t_info *info);
int				str_preci(char *s, t_info *info, int x);
int				ft_strlen(char *s);
int				ft_nbrlen_u(unsigned int d, int len);
int				ft_nbrlen_llu(unsigned long long d, int len);
char			*ft_strchr(char *s, char c);
int				ft_isdigit(int c);
void			ft_bzero(void *s, size_t n);
char			*ft_itoa(int n);
char			*ft_itoa_u(unsigned int n);

#endif
