/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:00:10 by nerrakeb          #+#    #+#             */
/*   Updated: 2022/10/29 17:33:46 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*new;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	j = ft_strlen(s1) - 1;
	while (s1[i] && (ft_strchr(set, s1[i])))
		i++;
	while (j > i && (ft_strchr(set, s1[j])))
		j--;
	len = j - i + 1;
	new = ft_substr(s1, i, len);
	return (new);
}
