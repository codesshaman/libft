/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:23:04 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/14 19:18:11 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Переводим строку в число

int					ft_atoi(const char *str)
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
    else if (str[i] <= '0' && str[i] >= '9')
    {
        return (0);
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (sign < 0) ? (-res) : res;
}