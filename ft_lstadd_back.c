/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohchams <mohchams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 19:47:24 by mohchams          #+#    #+#             */
/*   Updated: 2024/11/24 16:54:30 by mohchams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Ajoute l’élément ’new’ à la fin de la liste.
ft_lstlast renvoie le drn element de la liste et ensuite il est remplacer 
par new*/
#include "libft.h"

void 	ft_lstadd_back(t_list **lst, t_list *new)
{
		if (!lst || !new)
			return ;
		if (*lst)
			ft_lstlast(*lst)->next = new;
		else
			*lst = new;
}