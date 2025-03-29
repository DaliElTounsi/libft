/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohchams <mohchams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 18:15:50 by mohchams          #+#    #+#             */
/*   Updated: 2024/11/24 18:37:15 by mohchams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Supprime et libère la mémoire de l’élément passé en
paramètre, et de tous les éléments qui suivent, à
l’aide de ’del’ et de free(3)
Enfin, le pointeur initial doit être mis à NULL.*/
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *temp;

	if (!lst || !del)
		return ;
	while (lst)
	{
		temp = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(temp, del);
	}
	*lst = NULL;
}
