/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:59:10 by lchew             #+#    #+#             */
/*   Updated: 2022/05/26 16:03:34 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Allocates (with malloc(3)) and returns a copy of 's1' with the characters
**	specified in 'set' removed from the beginning and the end of string.
**	
**	The ft_substr() returns the pointer to the new string.
**	Returns NULL if the allocation fails.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*array;
	size_t			slen;
	size_t			setlen;
	unsigned int	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	slen = ft_strlen(s1);
	i = 0;
	while (*s1 != '\0')
	{
		while (set[i] != '\0')
		{
			if (ft_strchr(s1, set[i]) != NULL)

		}
		
			
	}

	array = ft_calloc((slen + 1), sizeof(char));
	if (!array)
		return (NULL);
	strlcpy(array, s1, slen + 1);
	return (array);
}