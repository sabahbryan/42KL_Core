/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 19:26:51 by bryaloo           #+#    #+#             */
/*   Updated: 2024/02/23 19:27:02 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static char	*str_create(size_t n)
{
	char	*s;

	s = (char *)malloc(sizeof(char) *(n + 1));
	if (!s)
		return (NULL);
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2);
{
	char	*str;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	str = str_create(str_len(s1) + ft_strlen(s2));
	if (!str)
		return (NULL);
	ptr = str;
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';
	return (ptr);
}
/*
	create main function to test
*/