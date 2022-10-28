/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:00:10 by nerrakeb          #+#    #+#             */
/*   Updated: 2022/10/19 20:38:57 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char const *set, int c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*new;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	j = ft_strlen(s1) - 1;
	while (s1[i] && (check(set, s1[i]) == 1))
		i++;
	while (j > i && (check(set, s1[j]) == 1))
		j--;
	new = ft_substr(s1, i, j - i + 1);
	return (new);
}
