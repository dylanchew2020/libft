/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 12:22:59 by lchew             #+#    #+#             */
/*   Updated: 2022/05/22 15:47:24 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	The ft_memcpy() function copies len bytes from memory area src to memory area dst.  If
**	dst and src overlap, behavior is undefined.
**
**	The ft_memcpy() function returns the original value of dst.
*/
void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char *d;

	d = dst;
	while (len--)
		*d++ = *(unsigned char *)src++;
	return (dst);
}

/* int main(void)
{
	char s[100] = "1111\0001111";
	char d[100] = "12345678901234567890";
	int i = 9;
	int j = 0;
	int k = strlen(d);

	strncpy(d, s, i);
	while (j < k)
		printf("%d ", d[j++]);
	printf("\n%s\n", d);

	j = 0;
	ft_memcpy(d, s, i);
	while (j < k)
		printf("%d ", d[j++]);
	printf("\n%s\n", d);
	return (0);

} */