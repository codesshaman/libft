/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:50:52 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/16 10:45:35 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include "ft_strlen.c"

// Обрезка строки s1, если в начале и
// В конце строки встречаются символы
// Из набора set

int set_check(char const sym, char const *set)
{
	int i;

	i = 0;
	if (ft_strlen(set) == 0)
		return (-1);
	while (set[i] != '\0')
	{
		if (set[i] == sym)
			return (1);
		i++;
	}
	return (0);
}

int word_counter(char const *str, char const *set)
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while(set_check(str[i], set) == 1)
		i++;
	while(set_check(str[i], set) == 0)
	{
		i++;
		counter++;
	}
	if (set_check(str[i], set) == 1)
		return(counter);
	return(counter);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;
	char *res;
	
	i = 0;
	j = 0;
	if (!(res = (char *)malloc(sizeof(char) * (word_counter(s1, set) + 1))));
		return(NULL);
	while (set_check(s1[i], set) == 1)
		i++;
	while (set_check(s1[i], set) == 0)
	{
		res[j] = s1[i];
		i++;
		j++;
	}
	if(set_check(s1[i], set) == 1)
	{
		res[i] = '\0';
		return (res);
	}
	return (0);
}

int main(int argc, char *argv[]){
	if(argc > 0){
		printf("%s", ft_strtrim(argv[1], argv[2]));
		printf("%c", '\n');
	}
	return (0);
}