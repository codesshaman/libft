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

//#include "libft.h"
#include <stdio.h>
#include "ft_strlen.c"

// Поиск первого вхождения символа в строке,
// NULL если символ не найден

char *ft_strchr(const char *str, int ch)
{
	char	*ptr;
	char	sym;
	int		i;

	i = 0;
	ptr = (char *)str;
	sym = (char)ch;
	while ((ptr[i] != 0) && (ptr[i] != sym))
		i++;
	return ((ptr[i] == sym) ? ptr[i] : NULL);
}

int main(int argc, char *argv[]){
	if(argc > 0){
		printf("%d", ft_strchr(argv[1], argv[2]));
		printf("%c", '\n');
	}
	return (0);
}