/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 22:52:21 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/14 20:13:07 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Сравнение двух массивов посимвольно
// 0 если массивы идентичны
// 1 если первый отличный бит больше,
// -1 если первый отличный бит меньше

int ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	unsigned char	*b1;
	unsigned char	*b2;
	int             arr_size;
	size_t			i;

	b1 = (unsigned char *)arr1;
	b2 = (unsigned char *)arr2;
	i = 0;
	if (ft_strlen(arr1) < ft_strlen(arr2))
		arr_size = ft_strlen(arr1);
	if (ft_strlen(arr1) > ft_strlen(arr2))
		arr_size = ft_strlen(arr2);
	if (ft_strlen(arr1) == ft_strlen(arr2))
		arr_size = ft_strlen(arr2);
	if (n > arr_size)
		arr_size = n;   
	while(i < arr_size)
	{
		if(b1[i] != b2[i])
			return(b1[i] - b2[i]);
		i++;
	}
	i++;
}