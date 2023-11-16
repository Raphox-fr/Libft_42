/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:38:19 by rafaria           #+#    #+#             */
/*   Updated: 2023/11/13 10:23:17 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	i = 0;
	
	while (dest[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (dest[i])
		i++;
	return (i);
}

#include<stddef.h>
#include<stdlib.h>
#include <stdio.h>

int main()
{
    size_t i = 15;
    char destination[] = "Salu";
    char s[] = "bonjourRRRRRRR";
    printf("%ld", ft_strlcpy(destination, s, i));
	printf("\n");
}


// #include<stddef.h>
// #include<stddef.h>
// size_t    ft_strlcpy(char *dest, char *src, size_t dstsize)
// {
//     int    i;
//     i = 0;
    
//     while (src[i] != '\0' || i < (dstsize - 1))
//     {
//         dest[i] = src[i];
//         i++;
//     }
//     dest[i] = '\0';
//     i = 0;
//     while (dest[i])
//         i++;
//     return (((size_t)i));
// }