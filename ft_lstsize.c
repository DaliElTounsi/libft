/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohchams <mohchams@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 19:21:28 by mohchams          #+#    #+#             */
/*   Updated: 2024/11/24 16:52:05 by mohchams         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Compte le nombre d’éléments de la liste
#include	"libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;
	
	i = 0;
	while (lst)
	{
		i++;
		lst =  lst->next;
	}
	return (i);
}