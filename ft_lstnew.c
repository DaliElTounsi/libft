/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohchams <mohchams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 22:42:00 by mohchams          #+#    #+#             */
/*   Updated: 2024/11/22 19:19:14 by mohchams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft_lstnew :

    Crée un nouvel élément de liste chaînée.
    Utile pour initialiser la liste ou créer des éléments isolés.*/
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nvl_list;

	nvl_list = malloc(sizeof(t_list));
	if (!nvl_list)
		return (0);
	nvl_list->content = content;
	nvl_list->next = 0;
	return (nvl_list);
}
