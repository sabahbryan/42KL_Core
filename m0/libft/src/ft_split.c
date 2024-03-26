/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 18:36:39 by bryaloo           #+#    #+#             */
/*   Updated: 2024/03/26 18:36:55 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    **ft_split(char const *s, char c)
{
    int num_parts = 1;
    const char *ptr = s;
    while (*ptr)
    {
        if (*ptr++ == c)
            num_parts++;
    }

    char **result = (char **)malloc((num_parts + 1) * sizeof(char *));
    if (result == NULL)
        return NULL;

    int part_index = 0;
    const char *part_start = s;

    size_t substring_length(const char *start, const char *end)
        return (size_t)(end - start);

    while (*s)
    {
        if (*s == c)
        {
            const char *part_end = s;
            size_t part_length = substring_length(part_start, part_end);
            result[part_index] = (char *)malloc((part_length + 1) * sizeof(char));
            if (result[part_index] == NULL)
            {
                while (part_index > 0)
                    free(result[--part_index]);
                free(result);
                    return NULL;

            const char *source = part_start;
            char *destination = result[part_index];
            while (source != part_end)
                *destination++ = *source++;
            *destination = '\0';
            part_start = s + 1;
            part_index++;
    }
    s++;

    size_t part_length = substring_length(part_start, s);
    result[part_index] = (char *)malloc((part_length + 1) * sizeof(char));
    if (result[part_index] == NULL)
    {
        while (part_index > 0)
            free(result[--part_index]);
        free(result);
            return NULL;
    }

    ft_strcpy(result[part_index], part_start);
    result[part_index + 1] = NULL;
    return result;
}

