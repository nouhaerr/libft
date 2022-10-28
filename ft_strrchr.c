/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 00:18:31 by nerrakeb          #+#    #+#             */
/*   Updated: 2022/10/23 10:08:05 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = ft_strlen(s);
	ptr = (char *)s;
	if (!c)
		return ((char *)s + ft_strlen(s));
	while (i >= 0)
	{
		if (ptr[i] == (char)c)
			return (&ptr[i]);
		i--;
	}
	return (0);
}
