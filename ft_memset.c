/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:01:28 by rafaria           #+#    #+#             */
/*   Updated: 2023/11/08 16:23:46 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
void * ft_memset(void * pointer, int value, size_t count)
{
	unsigned int *p;
	p = pointer;
	size_t i;

	i = 0;
	while(i < count)
	{
		p[i] = value;
		i++;
	}
	return (pointer);
}

i