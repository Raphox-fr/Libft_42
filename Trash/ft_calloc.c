/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphox <raphox@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:03:49 by marvin            #+#    #+#             */
/*   Updated: 2023/11/10 17:28:48 by raphox           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdlib.h>
#include <stdio.h>

void *ft_calloc(size_t nmemb, size_t size)
{
	int all;
	int *ptr;
	int i;
	i = 0;
	all = nmemb * size;
	ptr = malloc(sizeof(int) * all);
	if (ptr == NULL)
		return (NULL);

	while(i < all)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
int main(void)
{
	size_t nmemb = 4;
	size_t size = 4;
	printf("%p", ft_calloc(nmemb, size));
}