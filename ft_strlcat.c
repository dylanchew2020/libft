/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:29:22 by lchew             #+#    #+#             */
/*   Updated: 2022/05/23 13:29:22 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	slen;
	size_t	dlen;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	if (dstsize < (dlen + 1))
		return (slen + dstsize);
	dstsize -= dlen + 1;
	dst += dlen;
	if (dstsize >= slen)
		dstsize = slen;
	ft_memcpy(dst, src, dstsize);
	dst[dstsize] = '\0';
	return (slen + dlen);
}

/* int	main(void)
{
	char a[30] = "AAAAAAAAA";
	char b[30] = "\000\000\000";

	size_t i = ft_strlcat(b, a, 1);
	printf("%s, %lu\n", b, i);
} */

/* void	ft_dlencount(char *d, int *i, size_t *size)
{
	int	num;
	size_t	s;

	num = *i;
	s = *size;
	while (s != 0 && d[num] != '\0')
	{
		num++;
		s--;
	}
	*i = num;
	*size = s;
}

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	int	i;
	int	j;
	int	dlen;

	i = 0;
	j = 0;
	ft_dlencount(dest, &i, &dstsize);
	dlen = i;
	if (dstsize == 0)
		return (dlen + ft_strlen(src));
	while (src[j] != '\0')
	{
		if (dstsize != 1)
		{
			dest[i] = src[j];
			i++;
			dstsize--;
		}
		j++;
	}
	dest[i] = '\0';
	return (dlen + j);
} */
