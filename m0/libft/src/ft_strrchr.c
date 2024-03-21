/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:31:38 by bryaloo           #+#    #+#             */
/*   Updated: 2024/03/21 18:31:50 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *str, int c)
{
    const char  *last;

    last = NULL;
    while (*str)
    {
        if (*str == (char)c)
            last = str;
        str++;
    }
    if (*str == (char)c)
        return ((char *)str);
    else
        return ((char *)str);
}
/*
	create main function to test
    ----
    Alternative:
{
    char const *aux;

    aux = strchr(str, '\0');
    while (aux >= str)
    {
        if (*aux == (char)c)
            return ((char *)aux);
        aux--;
    }
    return NULL; // Character not found, return NULL
}
*/