/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:50:52 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/16 10:45:35 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Обрезка строки s1, если в начале и
// В конце строки встречаются символы
// Из набора set

int set_check(char const sym, char const *set)
{
	int i;

	i = 0;
	if (ft_strlen(*set) == 0)
		return (0);
	while (set[i] != '\0')
		if (set[i] == sym)
			return (1);
	return (0);    
}

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	int first;
	int last;
	size_t length;
	char res;
	
	i = 0;
	first = 0;
	last = 0;
	while(set_check(s1[i], *set) != 0)
		i++;
		first++;
	i = (ft_strlen(*s1) +1);
	while(set_check(s1[i], *set) != 0)
		i--;
		last++;
	length = (ft_strlen(*s1) - first - last + 1);
	res = NULL;
	res = (char *)malloc(length);
	if (res = NULL)
		return (NULL);
	i = 0;
	while(i < length)
		res[i] = s1[first];
		i++;
		first++;
	return (res);
}