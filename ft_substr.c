/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 14:54:17 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/15 15:17:23 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Создаёт подстроку строки s
// Начиная с start длинной len

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	int i;
	int j;
	char *sub;
	
	i = 0;
	j = 0;
	sub = NULL;
	sub = malloc(len * sizeof(char));
	if (sub = NULL)
		return (NULL);
	while(s[i] != '\0')
		if((i >= start) && (i < len))
			sub[j] = s[i];
			j++;
		i++;
	return (*sub);
}