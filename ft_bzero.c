/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:58:34 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/14 19:17:42 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// Заполняем ячейки массива нулями
// *dest - указатель на массив
// s - количество заполняемых ячеек

void ft_bzero(void *dest, size_t s)
{
	size_t i;
	char *arr;

	i = 0;
	arr = (char *)dest;
	while(i < s)
	{
		arr[i] = '0';
		i++;
	}
}

// memset

int main(int argc, char *argv[]){
	if(argc > 0){
		char arr[4] = "abcd";
		ft_bzero(arr, (size_t)4);
		printf("%s", arr);
		printf("%c", '\n');
	}
	return (0);
}