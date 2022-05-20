/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:28:52 by lchew             #+#    #+#             */
/*   Updated: 2022/05/20 15:37:24 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	The ft_isprint() function tests for any printing character, including space (' '). 
**	character between 0 and octal 0177 inclusive.
**
**	The ft_isprint() function returns zero if the character tests false and returns non-
**	zero if the character tests true.
*/

int	ft_isprint(int c)
{
	if (c >= 0040 && c <= 0176)
		return (1);
	return (0);
}