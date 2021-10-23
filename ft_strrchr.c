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

//******************Part I******************//

#include "libft.h"
// #include <stdio.h>
// #include "ft_strlen.c"

// Поиск последнего вхождения символа
// Код которого указан в ch

char *ft_strrchr (const char *str, int ch)
{
	int i;
	char find;

	find = (char *)ch;
	i = ft_strlen(*str) - 1;
	while(i > 0)
		if(str[i - 1] == find)
			return (str[i]);
        i--;
	return (NULL);
}

// int main(int argc, char *argv[]){
// 	if(argc > 0){
// 		char arr[6] = "135687";
// 		printf("%c", ft_strrchr(arr, '8'));
// 		printf("%c", '\n');
// 	}
// 	return (0);
// }