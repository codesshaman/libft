/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 22:38:21 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/14 20:53:33 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Сравнение двух строк с ограничением
// Количества сравниваемых символов (от
// 0 до n), 0 если разницы нет, -1 если
// отличный бит меньше, 1 если больше.

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;
	int str_size;
	
	i = 0;
	if (ft_strlen(*s1) > ft_strlen(*s2))
		str_size = ft_strlen(*s2);
	if (ft_strlen(*s1) < ft_strlen(*s2))
		str_size = ft_strlen(*s1);
	if (ft_strlen(*s1) == ft_strlen(*s2))
		str_size = ft_strlen(*s1);
	while ((i < str_size) || (i < n))
	{
		if (s2[i] != s1[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}