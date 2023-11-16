/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:18:40 by rafaria           #+#    #+#             */
/*   Updated: 2023/11/09 17:05:56 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// size t unsigned long int

#include <stddef.h>
void * ft_memchr( const void *s, int c, size_t size)
{
	int i;
	i = 0;
	
	char *str;
	unsigned char ch;

	str = (char *)s;
	ch = (unsigned char)c;

	while(i < size)
	{
		if (str[i] == ch)
		{
			return(str + i);
		}
		i++;
	}
	return (NULL);
	
}

#include <stddef.h>
#include<stdio.h>

int main()
{
	char string[] = "tes archi bizarre";
	int i = 'i';
	size_t bee = 9;

	printf("%s",(unsigned char *)(ft_memchr(string, i, bee)));
}