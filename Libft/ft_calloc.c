/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphox <raphox@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:03:49 by marvin            #+#    #+#             */
/*   Updated: 2023/11/16 15:50:40 by raphox           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t n, size_t size)
{
	int	all;
	int	*ptr;
	int	i;

	i = 0;
	all = n * size;
	ptr = malloc(sizeof(int) * all);
	if (size <= 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	while (i < all)
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