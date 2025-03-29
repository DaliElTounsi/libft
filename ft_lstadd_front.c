/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohchams <mohchams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:21:31 by mohchams          #+#    #+#             */
/*   Updated: 2024/11/24 15:07:42 by mohchams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Ajoute l’élément ’new’ au début de la liste.*/
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}