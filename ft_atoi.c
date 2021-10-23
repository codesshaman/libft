/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:23:04 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/19 12:37:04 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part I******************//

#include "libft.h"
//#include <stdio.h>

// Переводим строку в число

int		ft_atoi(const char *str)
{
    int i;
    int res;
    int sign;
    
    i = 0;
    res = 0;
    sign = 0;
    if(str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
    {
        sign = 1;
        i++;
    }
    else if (str[i] <= 48 && str[i] >= 57)
    {
        return (0);
    }
    while(str[i] >= 48 && str[i] <= 57)
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (sign < 0) ? (-res) : res;
}

// int main(int argc, char *argv[]){
// 	if(argc > 0){
// 		printf("%d", ft_atoi(argv[1]));
// 		printf("%c", '\n');
// 	}
// 	return (0);
// }