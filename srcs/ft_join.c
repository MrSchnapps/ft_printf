/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 06:29:35 by judecuyp          #+#    #+#             */
/*   Updated: 2019/12/18 08:19:50 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_strnjoin(char const *s1, char const *s2, int start, size_t len)
{
	char	*str;
	char	*ptr_str;
	size_t	i;

	i = 0;
	if (!s2)
		return (NULL);
	if (!(str = (char *)malloc((ft_strlen(s1) + len + 1) * sizeof(char))))
		return (NULL);
	ptr_str = str;
	if (s1)
		while (*s1)
			*str++ = *s1++;
	while (i < len && s2[start + i])
	{
		*str++ = s2[start + i];
		i++;
	}
	*str = '\0';
	return (ptr_str);
}

int		ft_intjoin(int **t1, int size, int nb)
{
	int i;
	int *tab;
	int *tmp;

	tmp = *t1;
	if (!(tab = (int *)malloc(size * sizeof(int))))
		return (0);
	i = 0;
	if (*t1)
		while (i < size - 1)
		{
			tab[i] = *t1[i];
			i++;
		}
	tab[i] = nb;
	*t1 = tab;
	return (ft_ifree(&tmp, 1));
}

char	*ft_strjoin(char const *s1, char const *s2, int i)
{
	char	*str;
	char	*ptr_str;

	if (!s2)
		return (NULL);
	if (!(str = (char *)malloc((ft_strlen(s1)
		+ ft_strlen(s2) + 1) * sizeof(char))))
		return (NULL);
	ptr_str = str;
	if (s1)
		while (*s1)
			*str++ = *s1++;
	if (i == 1)
		*str++ = *s2;
	else
		while (*s2)
			*str++ = *s2++;
	*str = '\0';
	return (ptr_str);
}

int		ft_jtf(char **s, char *s2, int i)
{
	char *tmp;

	tmp = *s;
	if (!(*s = ft_strjoin(*s, s2, i)))
		return (ft_free(&tmp, 0));
	return (ft_free(&tmp, 1));
}

int		ft_jtnf(char **s, char const *format, int start, size_t len)
{
	char *tmp;

	tmp = *s;
	if (!(*s = ft_strnjoin(*s, format, start, len)))
		return (ft_free(&tmp, 0));
	return (ft_free(&tmp, 1));
}
