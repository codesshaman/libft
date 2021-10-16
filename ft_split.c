/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 10:46:31 by jleslee           #+#    #+#             */
/*   Updated: 2021/10/16 18:55:49 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Разбитие строки *s на
// Массивы по символу c

// Поиск начального символа

int first_symbol(int const last, char *str, char const sep)
{
    int i;

    i = 0;
    while(str[i])
        if ((str[i] != sep) && (i > last))
            return (i);
        else
            if (str[i] == sep)
            {
                last = i;       // Пропускаем несколько
                i++;            // Разделителей подряд
            }
    return (-1);
}

// Поиск конечного символа

int last_symbol(int const last, char *str, char const sep)
{
    int i;

    i = 0;
    while(str[i])
        if (i > last)
        {
            if ((str[i] != sep))
                i++
            else
                if (i - last > 1)
                    return (i - 1);
        }
    return (-1);
}

int word_length(char const *str, char const sep, int const next)
{
    int i;
    int last;
    int first;
    int counter;

    i = 0;
    first = first_symbol(next, *str, sep);
    last = last_symbol(next, *str, sep);
    counter = 0;
    while (str[i])
        if ((i > first) && (i < last))
            counter++;
        i++;
    return (counter);
}

char word_maker(char const *str, char const sep)
{
    int i;
    int length;
    char first;
    char *res;
    char last;
    
    i = 0;
    res = NULL;
    while (str[i])
    {
        first = first_symbol(i, *str, sep);
        length = word_length(*str, sep, first);
        last = last_symbol(i, *str, sep);
        i = i + last;
        res = (char *)malloc(sizeof(char) * (length + 1))
        if (res == NULL)
            return (NULL);
        
    }
}

char **ft_split(char const *s, char c)
{
    int i;
    int sep;
    
    i = 0;
    sep = 0;
    while (s[i] != '\0')
        sep = is_separator(i, *s, c);
        if (sep != 0)
            make_word(i, sep, *s);
            i = sep;
}