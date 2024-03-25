/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:30:17 by bryaloo           #+#    #+#             */
/*   Updated: 2024/03/25 17:36:19 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char    *str;

    i = 0;
    str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
    if (str == NULL)
        return (NULL);
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}
/*
	create main function to test
*/