/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 20:32:11 by judecuyp          #+#    #+#             */
/*   Updated: 2019/12/18 10:08:46 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_printf_list
{
	int		count;
	char	*str;
	int		i;
	int		z;
	int		left;
	int		p;
	int		min;
	int		max;
	int		r;
	int		pass;
	int		*t_pass;
}				t_plist;

typedef struct	s_sizenum
{
	int spaces;
	int len;
	int zero;
	int i;
	int size;
}				t_sizenum;

int				ft_printf(const char *format, ...);
char			*ft_utoa(unsigned int nbr, t_plist *s);
char			*ft_itoa(int nbr, t_plist *s);
char			*ft_llutoah(long long unsigned int nbr, char *base);
char			*ft_itoah(unsigned int nbr, char *base, t_plist *s);
char			*ft_zero(t_plist *s);
int				ft_p(va_list ap, t_plist *s);
int				ft_jtf(char **s, char *s2, int i);
int				ft_free(char **str, int r);
int				ft_ifree(int **tab, int r);
int				ft_sfree(t_plist *s, int r);
int				ft_spaces(t_plist *s, char *stri, int t);
char			*ft_strnjoin(char const *s1, char const *s2,
	int start, size_t len);
int				ft_intjoin(int **t1, int size, int nb);
char			*ft_strjoin(char const *s1, char const*s2, int i);
int				ft_jtf(char **s, char *s2, int i);
int				ft_jtnf(char **s, char const *format, int start, size_t len);
int				ft_strlen(const char *s);
int				ft_strlen_pass(char *str, t_plist *s);
int				ft_putstr(char *str, t_plist *s);
int				ft_atoi(const char *nptr, int *res);
int				ft_num_flags(char *str, t_plist *s);
int				ft_acc(t_plist *s, char *str);
int				ft_c(va_list ap, t_plist *s, char flag);
int				ft_s(va_list ap, t_plist *s);
int				ft_num(va_list ap, t_plist *s, const char *format);

#endif
