/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohchams <mohchams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 20:40:01 by mohchams          #+#    #+#             */
/*   Updated: 2024/11/24 15:08:55 by mohchams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Libère la mémoire de l’élément passé en argument en
utilisant la fonction ’del’ puis avec free(3). La
mémoire de ’next’ ne doit pas être free.*/
#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *))

{
	if (!lst)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}