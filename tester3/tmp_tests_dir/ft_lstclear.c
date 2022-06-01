/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:07:52 by lchew             #+#    #+#             */
/*   Updated: 2022/06/01 14:07:52 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *temp;
    t_list  *current;

    if (!lst)
        return ;
    current = *lst;
    while (current)
    {
        temp = current;
        current = current->next;
        ft_lstdelone(temp, del);
    }
    *lst = current;       
}