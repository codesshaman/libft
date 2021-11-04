/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:17:43 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/26 21:11:48 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part II******************//

// Переводит int в ascii (число в строку)

#include "libft.h"
//#include <stdio.h>

int	num_len(long int num)
{
	int	i;

	i = 0;
	if (num < 0)
	{
		num = num * -1;
		i++;
	}
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

void	new_string(char *str, long int n)
{
	int	flag;
	int	len;

	flag = 1;
	len = num_len(n);
	if (n < 0)
	{
		n = n * -1;
		flag = flag * -1;
	}
	while (len--)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	if (flag == -1 && !++len)
		str[len] = '-';
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	if (n > 2147483647 || n < -2147483648)
		return (NULL);
	str = NULL;
	i = num_len(n);
	if (n == 0)
		str = (char *)malloc(2);
	else
		str = (char *)malloc(num_len(n) + 1);
	if (str == NULL)
		return (NULL);
	new_string(str, n);
	str[i] = '\0';
	return (str);
}

// int main(void){
//     printf("%s", ft_itoa(68));
//     printf("%c", '\n');
//     printf("%s", ft_itoa(0));
//     printf("%c", '\n');
// 	printf("%s", ft_itoa(2147483647));
//     printf("%c", '\n');
//     printf("%s", ft_itoa(-2147483648));
//     printf("%c", '\n');
//     return (0);
// }