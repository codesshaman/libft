/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 22:19:22 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/25 23:34:17 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//******************Part II******************//

#include "libft.h"

char *ft_striteri(char *s, void (*f)(unsigned int,char*))
{
    int i;

    i = 0;
    if (!s || !f)
        return (NULL);
    while (s[i])
	{
		f(i, s + i);
		i++;
	}
    return (s);
}