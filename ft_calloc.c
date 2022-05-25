/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 12:55:40 by lchew             #+#    #+#             */
/*   Updated: 2022/05/25 12:55:40 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	The ft_calloc() function allocates memory for an array of nmemb elements of
**	size bytes each and returns a pointer to the allocated  memory. The memory
**	is set to zero. If nmemb or size is 0, then calloc() returns NULL.
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void *array;

	array = malloc(nmemb * size);
	if (!array)
		return (NULL);
	ft_bzero(array, (nmemb * size));
	return (array);
}
