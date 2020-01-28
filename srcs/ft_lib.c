/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 06:33:35 by judecuyp          #+#    #+#             */
/*   Updated: 2019/12/18 10:08:45 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_strlen(const char *s)
{
	int i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

int		ft_strlen_pass(char *str, t_plist *s)
{
	int i;
	int j;

	j = 0;
	if (!s)
		return (0);
	if (!(i = 0) && s->pass > -1)
	{
		while (*str)
		{
			if (j <= s->pass)
			{
				if (i == s->t_pass[j])
				{
					*str = '\0';
					j++;
				}
			}
			str++;
			i++;
		}
	}
	else
		return (ft_strlen(str));
	return (i);
}

int		ft_putstr(char *str, t_plist *s)
{
	int i;

	i = ft_strlen_pass(str, s);
	write(1, str, i);
	return (i);
}

int		ft_atoi(const char *nptr, int *res)
{
	int					sign;
	unsigned int		nb;
	int					pass;

	sign = 1;
	pass = 0;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	nb = 0;
	while (*nptr >= 48 && *nptr <= 57)
	{
		nb = (nb * 10) + *nptr - '0';
		nptr++;
		pass++;
	}
	*res = (nb * sign);
	return (pass);
}
