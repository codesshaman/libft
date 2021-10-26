/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:10:45 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/26 13:23:32 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Bonus Part******************//

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list	*last;

	if (lst == NULL || new == NULL)
		return ;
	last = ft_lstlast(*lst);
	new->next = last->next;
	last->next = new;
}