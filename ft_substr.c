/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 14:54:17 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/28 13:55:19 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part II******************//

// Возвращает часть строки s длинной len с start

#include "libft.h"
// #include <stdio.h>
// #include "ft_strlen.c"

// Создаёт подстроку строки s
// Начиная с start длинной len


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	strlen;
	char			*sub;

	strlen = ft_strlen(s);
	if (strlen == 0)
		return (NULL);
	if (!(sub = malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (strlen < start)
	{
		sub = malloc(sizeof(char) * 1);
		sub[0] = '\0';
		return (sub);
	}
	if (!(sub = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

// int main(void){
// 	printf("%s", ft_substr("abcdefgkl", 0, (size_t)3));
// 	printf("%c", '\n');
// 	printf("%s", ft_substr("abcdefgkl", 3, (size_t)3));
// 	printf("%c", '\n');
// 	printf("%s", ft_substr("abcdefgkl", 6, (size_t)3));
// 	printf("%c", '\n');
// 	printf("%s", ft_substr("abcdefgkl", 9, (size_t)3));
// 	return (0);
// }