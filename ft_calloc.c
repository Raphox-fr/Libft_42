/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:03:49 by marvin            #+#    #+#             */
/*   Updated: 2023/11/20 19:01:30 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t n, size_t size)
{
	unsigned long int all;
	char *ptr;
	int i;

	i = 0;
	all = n * (long)size;

	if (all == 0)
		return (malloc(0));
	if ((long)size == -2147483648)
		return (NULL);
	if ((long)all < (long)n || all < (unsigned long)size)
		return (NULL);
	
	if (all / size != n)
	{
		return (0);
		
	}
	ptr = malloc((long)size * (long)all);
	if (ptr == NULL)
		return (NULL);
	while ((unsigned)i < all)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
// int	main(void)
// {
// 	size_t n = -4;
// 	size_t size = 4;
// 	printf("%p", ft_calloc(n, size));
// }
// int : min = -2147483648 ; max = 2147483647