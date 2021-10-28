/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:50:52 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/28 13:30:07 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part II******************//

#include "libft.h"
// #include <stdio.h>
// #include "ft_strlen.c"
// #include "ft_strlcpy.c"
// #include "ft_strdup.c"

// Обрезка строки s1, если в начале и
// В конце строки встречаются символы
// Из набора set

int set_check(char const sym, char const *set)
{
	int i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == sym)
			return (1);
		i++;
	}
	return (0);
}

int fitst_symbol(char const *str, char const *set)
{
	int i;
	
	i = 0;
	while (i != '\0' && (set_check(str[i], set) == 1))
		i++;
	return (i);
}

int last_symbol(char const *str, char const *set)
{
	int 	i;

	i = (ft_strlen(str) - 1);
	while (i >= 0 && (set_check(str[i], set) == 1))
		i--;
	return (i);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		first;
	int		last;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	first = fitst_symbol(s1, set);
	last = last_symbol(s1, set);
	if (first >= last)
		return (NULL);
	if(!(res = (char *)malloc(sizeof(char) * (last - first + 1))))
		return (NULL);
	ft_strlcpy(res, s1 + first, last - first + 1);
	return (res);
}

// int main(int argc, char *argv[]){
// 	if(argc > 0){
// 		printf("%s", ft_strtrim("abdfrde", "ae"));
// 		printf("%c", '\n');
// 		printf("%s", ft_strtrim(argv[1], argv[2]));
// 		printf("%c", '\n');
// 	}
// 	return (0);
// }