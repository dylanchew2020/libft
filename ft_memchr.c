/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:19:45 by lchew             #+#    #+#             */
/*   Updated: 2022/05/24 19:35:33 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
**	The ft_memchr() function locates the first occurrence of c (converted to an
**	unsigned char) in string s.
**	
**	The ft_memchr() function returns a pointer to the byte located, or NULL if no
**	such byte exists within n bytes.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	if (n == 0)
		return (NULL);
	if (c >= 256)
		c -= 256;
	while (n-- > 0 && (*(unsigned char *)s != c))
		++s;
	if (*(unsigned char *)s == c)
		return ((unsigned char *)s);
	return (NULL);
}
