/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:16:35 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/15 10:33:34 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Поиск последнего вхождения символа
// Код которого указан в ch

char *ft_strrchr (const char *str, int ch)
{
	int i;

	i = ft_strlen(*str);
	while(i > 0)
		if(str[i] == ch)
			return ((char *)str[i]);
        i--;
	return (NULL);
}