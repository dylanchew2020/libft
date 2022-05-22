/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:28:52 by lchew             #+#    #+#             */
/*   Updated: 2022/05/20 15:37:02 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	The ft_isascii() function tests for an ASCII character, which is any 
**	character between 0 and octal 0177 inclusive.
**
**	The ft_isascii() function returns zero if the character tests false and returns non-
**	zero if the character tests true.
*/

int	ft_isascii(int c)
{
	if (c >= 0000 && c <= 0177)
		return (1);
	return (0);
}