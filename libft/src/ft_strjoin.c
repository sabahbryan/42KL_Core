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

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_str_create(int size, char **strs, char *sep)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * (size - 1);
	if (size <= 0)
		len = 1;
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (0);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		x;
	int		y;
	int		z;
	char	*str;

	str = ft_str_create(size, strs, sep);
	x = -1;
	z = 0;
	while (++x < size)
	{
		y = 0;
		while (strs[x][y])
		{
			str[z++] = strs[x][y];
			y++;
		}
		y = 0;
		while (sep[y] && x != size - 1)
		{
			str[z++] = sep[y];
			y++;
		}
	}
	str[z] = '\0';
	return (str);
}
