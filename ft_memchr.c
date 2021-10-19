/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:05:43 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/19 12:05:43 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include "ft_atoi.c"

// Поиск в массиве символа, код которого задан
// Если символ найден, возвращается его адрес
// Если после n байт не найден, возвращается NULL

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *ptr;
	unsigned char sym;

	ptr = (unsigned char *)str;
	sym = (unsigned char)c;
	while (n--)
	{
		if (*ptr == sym)
			return (ptr);
		ptr++;
	}
    printf("%s", ptr);
    printf("%c", '\n');
	return (NULL);
}

int main(int argc, char *argv[]){
	if(argc > 0){
		printf("%d", ft_memchr(argv[1], ft_atoi(argv[2]), (size_t)argv[3]));
		printf("%c", '\n');
	}
	return (0);
}