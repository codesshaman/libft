/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:50:52 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/25 23:30:50 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part II******************//

#include "libft.h"
// #include <stdio.h>
// #include "ft_strlen.c"
// #include "ft_strlcpy.c"

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

char last_symbol(char const *str, char const *set)
{
	int 	i;

	i = (ft_strlen(str) - 1);
	while (i >= 0 && (set_check(str[i], set) == 1))
		i--;
	return ((char *)&str[i]);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		size;
	char	*first;
	char	*last;
	char	*outstr;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && (set_check(s1[i], set) == 1))
		i++;
	first = (char *)&s1[i];
	last = last_symbol(s1, set);
	if (!*s1 || last == first)
		size = 2;
	else
		size = last - first + 2;
	if (!(outstr = malloc(sizeof(char) * size)))
		return (NULL);
	ft_strlcpy(outstr, first, size);
	return (outstr);
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