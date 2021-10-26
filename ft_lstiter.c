/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:56:44 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/26 13:59:34 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Bonus Part******************//

#include "libft.h"

// Последовательно итерирует список, применяя
// Функцию f к каждому его элементу

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (lst == NULL || f == NULL)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}