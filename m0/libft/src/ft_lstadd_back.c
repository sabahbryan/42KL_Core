/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:52:06 by bryaloo           #+#    #+#             */
/*   Updated: 2024/03/27 18:52:30 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *temp;

    if (!lst || !new)
        return (NULL);
    if (!(*lst))
    {
        *lst = new;
        return (NULL);
    }
    temp = *lst;
    while (temp->next)
        temp = temp->next;
    temp->next = new;
}
/*
	create makefile to test
*/