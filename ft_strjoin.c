/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:43:33 by nerrakeb          #+#    #+#             */
/*   Updated: 2022/10/16 16:58:15 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	unsigned int	l;
	char			*str3;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	k = ft_strlen(s1);
	l = ft_strlen(s2);
	str3 = (char *)malloc((k + l + 1) * sizeof(char));
	if (!str3)
		return (0);
	while (i < k)
	{
		str3[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < k + l)
		str3[i++] = s2[j++];
	str3[i] = '\0';
	return (str3);
}
