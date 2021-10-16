/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 09:03:32 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/15 19:25:25 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Копирует из src в dest n - 1
// Символов, устанавливая в конец
// Строки нуль-терминант, возвращает
// Длинну получившейся строки

size_t *ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	if (!dest || !src)
		return (0);
	if(n == 0)
		return (ft_strlen(*src));
	while(i < (n - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(ft_strlen(*src));
}