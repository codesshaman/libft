/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:06:37 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/15 15:54:23 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Находит первое вхождение (первый бит)
// Строки little внутри строки big или
// Возвращает NULL при остутствии строки

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t  i;
	size_t  j;
	size_t  counter;
	
	i = 0;
	counter = ft_strlen(*little);
	if (counter < 1)
		return *big;
	while((big[i] != '\0') && (i + counter <= len))
	{
		j = 0;
		while(big[j + i] == little[j])
		{
			if (j == counter - 1)
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return(NULL);    
}