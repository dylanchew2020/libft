/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:31:06 by lchew             #+#    #+#             */
/*   Updated: 2022/05/20 14:53:41 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	The ft_isalpha() function tests for an alphabet.
**
**	The ft_isalpha() function returns zero if the character tests false and returns non-
**	zero if the character tests true.
*/
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}