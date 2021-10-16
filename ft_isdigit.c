/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 09:42:09 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/14 19:21:47 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Возвращаем 1, если передано
// Число, иначе возвращаем 0

int ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}