/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:05:20 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/15 15:54:10 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Конкатенация двух строк

char *ft_strjoin(char const *s1, char const *s2)
{
	int len1;
	int len2;
	int i;
	char *str;

	i = 0;
	len1 = ft_strlen(*s1);
	len2 = ft_strlen(*s2);
	str = NULL;
	if((len2 == 0) && (len1 > 0))
		return (len1);
	if((len1 == 0) && (len2 > 0))
		return (len2);
	if(len1 + len2 == 0)
		return (NULL);
	str = malloc((len1 + len2 + 1) * sizeof(char));
	if (str = NULL)
		return (NULL);
	while(i < len1)
		str[i] = s1[i];
		i++;
	while(i < len2)
		str[i] = s2++;
		i++;
	str[i] = '\0';
	return (*str);
}