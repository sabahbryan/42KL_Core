/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:06:59 by bryaloo           #+#    #+#             */
/*   Updated: 2024/03/25 17:07:48 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n);
{
    int num_digits;
    int temp;

    num_digits = 0;
    temp = n;
    while (temp != 0)
    {
        temp /= 10;
        num_digits++;
    }

    char    *str = (char *)malloc((num_digits + 2) * sizeof(char));
    if (str == NULL)
        return (NULL);

    int sign

    sign = 1;
    if (n < 0)
    {
        sign = -1;
        n = -n;
        str[0] = '-';
    }

    int i;

    i = num_digits + (sign == -1);
    str[i--] = '\0';
    while (num_digits--)
    {
        str[i--] = '0' + n % 10;
        n /= 10;
    }
    return (str);
}