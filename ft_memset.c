/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 16:01:45 by lchew             #+#    #+#             */
/*   Updated: 2022/05/22 14:28:54 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	The memset() function writes len bytes of value c (converted to an unsigned char)
**	to the string b.
**
**	The memset() function returns its first argument.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	while (len--)
		*(unsigned char *)b++ = (unsigned char) c;
	return (b);
}
