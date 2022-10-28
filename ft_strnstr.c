/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:26:00 by nerrakeb          #+#    #+#             */
/*   Updated: 2022/10/17 17:55:04 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	s;

	i = 0;
	j = 0;
	if (!needle[j])
		return ((char *)haystack);
	s = ft_strlen(needle);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j])
			j++;
		if (needle[j] == '\0')
		{
			if (i + s > len)
				return (NULL);
			else
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
