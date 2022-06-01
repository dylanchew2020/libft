/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:44:50 by lchew             #+#    #+#             */
/*   Updated: 2022/05/27 22:35:18 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countlen(int n)
{
	unsigned int	len;

	len = 1;
	if (n < 0)
	{
		if (n == INT_MIN)
			++n;
		++len;
		n *= -1;
	}
	while (n > 9)
	{
		++len;
		n /= 10;
	}
	return (len);
}

static char	*putnbr(char *result, int nbr)
{
	if (nbr < 0)
	{
		*result = '-';
		result++;
		if (nbr == INT_MIN)
		{
			*result++ = '2';
			nbr += 2000000000;
		}
		nbr *= -1;
	}
	while (nbr > 9)
	{
		result = putnbr(result, (nbr / 10));
		*result++ = (nbr % 10) + '0';
		nbr = -1;
	}
	if (nbr < 10 && nbr >= 0)
		*result++ = nbr + '0';
	return (result);
}

char	*ft_itoa(int nbr)
{
	char	*result;
	char	*r;

	result = malloc(sizeof(char) * countlen(nbr) + 1);
	if (!result)
		return (NULL);
	r = result;
	*result = '\0';
	result = putnbr(result, nbr);
	*result = '\0';
	return (r);
}
