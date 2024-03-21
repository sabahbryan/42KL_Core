/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:23:23 by bryaloo           #+#    #+#             */
/*   Updated: 2024/03/21 14:23:47 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *str, int c, size_t n)
{
    void    *ptr

    ptr = str;
    while (n--)
        *(unsigned char *)str++ = (unsigned char)c;
        return (ptr);
}
/*
	edit main function to test

int main(void)
    char buffer[10];
    ft_memset(buffer, 'A', sizeof(buffer));
*/