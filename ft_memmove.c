/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 15:20:14 by lchew             #+#    #+#             */
/*   Updated: 2022/05/22 16:30:08 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
**	The ft_emmove() function copies len bytes from string src to string dst.  The two
**	strings may overlap; the copy is always done in a non-destructive manner.
**
**	The ft_memmove() function returns the original value of dst.
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;

	d = dst;
	if (d > (unsigned char *)src)
	{
		d += len - 1;
		src += len - 1;
		while (len--)
			*(unsigned char *)d-- = *(unsigned char *)src--;
	}
	else
	{
		while (len--)
			*(unsigned char *)d++ = *(unsigned char *)src++;
	}
	return (dst);
}
