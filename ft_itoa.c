/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:17:43 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/25 23:31:13 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part II******************//

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
	while (num > 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

void	new_string(char *str, long int n)
{
    int flag;
    int len;

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
        return(NULL);
    str = NULL;
	i = num_len(n);
	if (n == 0)
		return (NULL);
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
//     printf("%s", ft_itoa(-68));
//     printf("%c", '\n');
//     return (0);
// }