/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 05:32:43 by judecuyp          #+#    #+#             */
/*   Updated: 2019/12/18 08:18:16 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_free(char **str, int r)
{
	if (!str || !*str)
		return (r);
	free(*str);
	*str = NULL;
	return (r);
}

int		ft_ifree(int **tab, int r)
{
	if (!tab)
		return (r);
	free(*tab);
	*tab = NULL;
	return (r);
}

int		ft_sfree(t_plist *s, int r)
{
	if (!s)
		return (r);
	ft_free(&s->str, 1);
	ft_ifree(&s->t_pass, 1);
	return (r);
}

char	*ft_zero(t_plist *s)
{
	int		i;
	char	*str;
	int		max;

	max = s->max;
	if (max == 0)
		i = 1;
	else
		i = max;
	if (!(str = (char *)malloc(i + 1)))
		return (NULL);
	str[i] = '\0';
	if (!s->p)
		str[i - 1] = '0';
	while (max--)
		str[max] = '0';
	return (str);
}

int		ft_num(va_list ap, t_plist *s, const char *format)
{
	char	*str;

	if (format[s->i] == 'x')
		if (!(str = ft_itoah(va_arg(ap, unsigned), "0123456789abcdef", s)))
			return (-1);
	if (format[s->i] == 'X')
		if (!(str = ft_itoah(va_arg(ap, unsigned), "0123456789ABCDEF", s)))
			return (-1);
	if (format[s->i] == 'u')
		if (!(str = ft_utoa(va_arg(ap, unsigned int), s)))
			return (-1);
	if (format[s->i] == 'i' || (format[s->i] == 'd'))
		if (!(str = ft_itoa(va_arg(ap, int), s)))
			return (-1);
	return (ft_num_flags(str, s));
}
