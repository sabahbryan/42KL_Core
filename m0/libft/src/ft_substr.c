/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:58:39 by bryaloo           #+#    #+#             */
/*   Updated: 2024/03/25 15:59:43 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  a;
    size_t  b;
    char    *str;

    str = (char *)malloc(sizeof(*s) * (len + 1));
    if (str == 0)
        return (NULL);
    a = 0;
    b = 0;
    while (s[i])
    {
        if (a >= start && b < len)
        {
            str[b] = s[a];
            b++;
        }
        a++;
    }
    str[b] = 0;
    return (str);
}
/*
	create main function to test
*/