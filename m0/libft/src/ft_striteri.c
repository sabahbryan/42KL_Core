/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:29:16 by bryaloo           #+#    #+#             */
/*   Updated: 2024/03/25 17:29:53 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int    i;

    i = o;
    while (s[i])
    {
        f(i, s + i);
        i++;
    }
}
/*
	create main function to test
*/