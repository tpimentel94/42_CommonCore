/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 20:07:57 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/05/22 17:59:48 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || 
			(c >= 'a' && c <= 'z') ||
			(c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*
int	main(void)
{
	int	n, y;

	n = ft_isalnum("-");
	y = ft_isalnum("8");
	
	printf("Negative test: %d\n", n);
	printf("Positive test: %d\n", y);

}
*/