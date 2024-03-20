/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:38:19 by bryaloo           #+#    #+#             */
/*   Updated: 2024/03/20 15:38:21 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	count;
	size_t	src_length;

	count = 0;
	src_length = 0;
	while (src[src_length] != '\0' && src_length < size - 1)
	{
		dest[count] = src[src_length];
		count++;
		src_length++;
	}
	dest[count] = '\0';
	while (src[src_length] != '\0')
		src_length++;
	return (src_length);
}
/*
	create main function to test
*/