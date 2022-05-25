/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:19:45 by lchew             #+#    #+#             */
/*   Updated: 2022/05/25 21:43:46 by lchew            ###   ########.fr       */
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
	unsigned char a;

	a = (unsigned char)c;
/* 	if (n == 0)
		return (NULL);
	if (a >= 256)
		a -= 256; */
	while (n--)
	{
		if (*(unsigned char *)s == a)
			return ((void *)s);
			++s;
	}
	return (NULL);
}
