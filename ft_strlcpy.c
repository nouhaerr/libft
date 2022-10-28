/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:35:26 by nerrakeb          #+#    #+#             */
/*   Updated: 2022/10/17 15:41:28 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (dstsize != 0)
	{
		while (s[i] != '\0' && i < dstsize - 1)
		{
			d[i] = s[i];
			i++;
		}
		d[i] = '\0';
	}
	return (ft_strlen(src));
}
