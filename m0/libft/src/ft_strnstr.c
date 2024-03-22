/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:13:28 by bryaloo           #+#    #+#             */
/*   Updated: 2024/03/22 16:13:43 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  s;

    if (!haystack && !len)
        return (NULL);
    if (!*needle)
        return ((char *)haystack);
    while (*haystack && n--)
    {
        s = 0;
        while (*(haystack + s) == *(needle + s) && *(needle + s) && s <= n)
        {
            if (!*(needle + s + 1))
                return ((char *)haystack);
            s++;
        }
        haystack++;
    }
    return (NULL);
}
/*
	create main function to test
*/