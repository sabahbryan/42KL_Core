/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:13:55 by bryaloo           #+#    #+#             */
/*   Updated: 2024/03/22 17:14:10 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t num, size_t size)
{
    size_t  str;
    void    *ptr;

    if (num == 0 || size == 0)
    {
        num = 1;
        size = 1;
    }
    str = num * size;
    ptr = malloc(str);
    if (p == NULL)
        return (NULL);
    else
        ft_bzero(ptr, str);
    return (ptr);
}
/*
	create main function to test
*/