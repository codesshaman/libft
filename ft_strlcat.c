/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:11:29 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/15 20:12:49 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Копирует из src в dest n - 1
// Символов, устанавливая в конец
// Строки нуль-терминант, возвращает
// Длинну получившейся строки

size_t *ft_strlcat(char *dest, const char *src, size_t n)
{
    size_t i;
    size_t j;

    j = 0;
	i = ft_strlen(*dest);
	if (!dest || !src)
		return (0);
	if(n == 0)
		return (ft_strlen(*src));
	while(i < (n - 1) && src[i])
	{
		dest[i] = src[j];
		i++;
        j++;
	}
	dest[i] = '\0';
	return(ft_strlen(*src) + ft_strlen(*dest));
} 