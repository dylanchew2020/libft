/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:31:06 by lchew             #+#    #+#             */
/*   Updated: 2022/05/22 16:54:17 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	The ft_isalnum() function tests for any character for which ft_isalpha or 
**	ft_isdigit is true.
**
**	The ft_isalnum() function returns zero if the character tests false and 
**	returns non-zero if the character tests true.
*/

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
