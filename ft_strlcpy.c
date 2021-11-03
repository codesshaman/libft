/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 09:03:32 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/27 21:28:39 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part I******************//

#include "libft.h"
// #include "ft_strlen.c"
// #include <stdio.h>

// Копирует из src в dest n - 1
// Символов, устанавливая в конец
// Строки нуль-терминант, возвращает
// Длинну получившейся строки

size_t	*ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (!src || !dest)
        return (0);
	if (n == 0)
		return ((size_t *)src_len);
	i = 0;
	dest[i] = '\0';
	while (src[i])
	{
		if (i < (n - 1))
		{
			dest[i + 1] = '\0';
			dest[i] = src[i];
		}
		i++;
	}
	return ((size_t *)i);
}

// int main(int argc, char *argv[]){
// 	if(argc > 0){
// 		char dst[] = "svdvfd";
// 		char src[] = "234324423423";
// 		size_t n = ft_strlcpy(dst, src, (size_t)5);
// 		printf("%d", n);
// 		printf("%c", '\n');
// 	}
// 	return (0);
// }