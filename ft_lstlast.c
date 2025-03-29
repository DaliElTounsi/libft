/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohchams <mohchams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 19:26:49 by mohchams          #+#    #+#             */
/*   Updated: 2024/11/24 16:53:04 by mohchams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Renvoie le dernier élément de la liste
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}
