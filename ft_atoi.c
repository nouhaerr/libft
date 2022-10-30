/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:54:14 by nerrakeb          #+#    #+#             */
/*   Updated: 2022/10/30 12:53:38 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	long_nbr(unsigned long long nbr, int signe)
{
	if (signe > 0 && nbr >= 9223372036854775807)
		return (-1);
	if (signe < 0 && nbr > 9223372036854775807)
		return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	unsigned long long	nbr;
	int					signe;
	int					i;

	i = 0;
	nbr = 0;
	signe = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = signe * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10;
		nbr = nbr + (str[i] - '0');
		i++;
	}
	if (nbr >= 9223372036854775807)
		return (long_nbr(nbr, signe));
	return (nbr * signe);
}
