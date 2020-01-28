/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llutoah.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 19:03:51 by judecuyp          #+#    #+#             */
/*   Updated: 2019/12/18 08:19:59 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char			*ft_llutoah(long long unsigned int nbr, char *base)
{
	long long unsigned int	nb_i;
	int						i;
	char					*str;

	nb_i = nbr;
	i = 1;
	while (nb_i >= 16)
	{
		i++;
		nb_i /= 16;
	}
	if (!(str = (char *)malloc((i + 1) * sizeof(char))))
		return (NULL);
	str[i] = '\0';
	i--;
	while (nbr >= 16)
	{
		str[i] = base[nbr % 16];
		i--;
		nbr /= 16;
	}
	str[i] = base[nbr % 16];
	return (str);
}
