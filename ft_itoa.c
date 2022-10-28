/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:52:28 by nerrakeb          #+#    #+#             */
/*   Updated: 2022/10/21 17:04:33 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_nbr(int nb)
{
	int		len;
	long	n;

	n = nb;
	len = 0;
	if (n == 0)
		len++;
	if (n < 0)
	{
		n *= -1;
		len ++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		l;
	long	nb;

	nb = n;
	i = 0;
	l = len_nbr(nb);
	str = (char *)malloc((l + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[l] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
		i = 1;
	}
	while (--l >= i)
	{
		str[l] = (nb % 10) + 48;
		nb /= 10;
	}
	return (str);
}
