/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 23:55:33 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/06/24 12:08:21 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	size_total;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	size_total = nmemb * size;
	if (size_total && size && size_total > (UINT_MAX / size))
	{
		return (NULL);
	}
	ptr = malloc(size_total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size_total);
	return (ptr);
}
