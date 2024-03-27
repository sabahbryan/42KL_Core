/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryaloo <bryaloo@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:53:30 by bryaloo           #+#    #+#             */
/*   Updated: 2024/03/27 18:54:09 by bryaloo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
    if (!lst || !del || !(*lst))
        return (NULL);
    ft_lstclear(&(*lst)->next, del);
    (del)((*lst)->content);
    free(*lst);
    *lst = NULL;
}
/*
	create makefile to test
*/