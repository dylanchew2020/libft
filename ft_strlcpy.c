/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:39:25 by lchew             #+#    #+#             */
/*   Updated: 2022/05/22 17:41:58 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	The strlcpy() copy strings by taking the full size of the destination buffer
**	and guarantee NUL-termination if there is room.  Note that room for the NUL 
**	should be included in dstsize.
**
**	strlcpy() copies up to dstsize - 1 characters from the string src to dst, 
**	NUL-terminating the result if dstsize is not 0. If the src and dst strings 
**	overlap, the behavior is undefined.
**
**	Return the total length of the string they tried to create, that means the
**	length of src. If the return value is >= dstsize, the output string has been
**	truncated.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!dstsize)
		return (ft_strlen(src));
	while (i < (dstsize - 1) && src[i])
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
