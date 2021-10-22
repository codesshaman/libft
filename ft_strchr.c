/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:16:56 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/15 21:03:30 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include "ft_strlen.c"
// #include "ft_memchr.c"

// Поиск первого вхождения символа в строке,
// Его ячейка памяти, если найден или
// NULL если символ не найден

char		*ft_strchr(const char *s, int ch)
{
	return (ft_memchr(s, ch, ft_strlen(s) + 1));
}

// int main(int argc, char *argv[]){
// 	if(argc > 0){
// 		char str[] = "abcdef";
// 		int th = 3;
// 		int ch = 100;
// 		printf("%d", ft_strchr(str, th));
// 		printf("%c", '\n');
// 		printf("%d", ft_strchr(str, ch));
// 		printf("%c", '\n');
// 	}
// 	return (0);
// }