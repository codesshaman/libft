/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:06:37 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/15 15:54:23 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part I******************//

#include "libft.h"
// #include <stdio.h>
// #include "ft_strlen.c"

// Находит первое вхождение (первый бит)
// Строки little внутри строки big или
// Возвращает NULL при остутствии строки

char	*ft_strnstr(const char *big, const char *leetle, size_t n)
{
	char	*arr;
	size_t	len;
	size_t	i;
	size_t	j;

	arr = (char *)big;
	if (!(len = ft_strlen(leetle)))
		return (arr);
	if (ft_strlen(big) < len || n < len)
		return (NULL);
	i = 0;
	while (arr[i] && i <= n - len)
	{
		j = 0;
		while (leetle[j] && leetle[j] == arr[i + j])
			j++;
		if (j == len)
			return (arr[i]);
		i++;
	}
	return (NULL);
}

// int main(int argc, char *argv[]){
// 	if(argc > 0){
// 		printf("%d", ft_strnstr("abcdfg", "fg", (size_t)6));
// 		printf("%c", '\n');
// 		printf("%d", ft_strnstr("babcd", "c", (size_t)5));
// 		printf("%c", '\n');
// 		printf("%d", ft_strnstr("abcde", "d", (size_t)6));
// 		printf("%c", '\n');
// 	}
// 	return (0);
// }