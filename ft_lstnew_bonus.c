/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 13:49:13 by nerrakeb          #+#    #+#             */
/*   Updated: 2022/10/27 15:41:06 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*noeud;

	noeud = (t_list *)malloc(sizeof(t_list));
	if (noeud == NULL)
		return (NULL);
	noeud -> content = content;
	noeud -> next = NULL;
	return (noeud);
}
