/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:05:20 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/27 17:01:54 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part II******************//

#include "libft.h"
// #include <stdio.h>
// #include "ft_strlen.c"

// Конкатенация двух строк

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		len;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	len = (ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!(res = malloc(sizeof(char) * (len))))
		return (NULL);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}

// int main(int argc, char *argv[]){
// 	if(argc > 0){
// 		printf("%s", ft_strjoin("abc", "def"));
// 		printf("%c", '\n');
// 		printf("%s", ft_strjoin(argv[1], argv[2]));
// 		printf("%c", '\n');
// 	}
// 	return (0);
// }