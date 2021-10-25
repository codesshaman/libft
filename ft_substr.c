/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 14:54:17 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/25 23:28:42 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part II******************//

#include "libft.h"
// #include <stdio.h>
// #include "ft_strlen.c"

// Создаёт подстроку строки s
// Начиная с start длинной len


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int	i;
	char			*sub;

	if (ft_strlen(s) == 0)
		return (NULL);
	if (!(sub = malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (ft_strlen(s) < start)
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
// 	printf("%C", '\n');
// 	printf("%s", ft_substr("abcdefgkl", 3, (size_t)3));
// 	printf("%C", '\n');
// 	printf("%s", ft_substr("abcdefgkl", 6, (size_t)3));
// 	printf("%C", '\n');
// 	printf("%s", ft_substr("abcdefgkl", 9, (size_t)3));
// 	return (0);
// }