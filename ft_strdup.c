/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 11:29:09 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/15 15:54:31 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // Для free
#include "libft.h"

// Дублирует строку str, выделяя
// Под неё память malloc-ом и
// -- Очищая с помощью free

char	*ft_strdup(const char *str)
{
	size_t n;
	char *res;
	
	n = ft_strlen(*str) + 1;
	res = NULL;
	res = (char *)malloc(n);
	if (res == NULL)
		return (0);
	ft_memcpy(res, *str, n);
	//free (res);
	return (res);
}