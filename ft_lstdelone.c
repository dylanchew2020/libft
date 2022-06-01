/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:00:27 by lchew             #+#    #+#             */
/*   Updated: 2022/06/01 14:00:27 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
    t_list  *temp;

    temp->next = lst->next;
    del(lst->content);
    free(lst);
    lst = temp->next;
}