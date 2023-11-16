/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:27:07 by rafaria           #+#    #+#             */
/*   Updated: 2023/11/09 15:17:31 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);	 
}

#include<stddef.h>
size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	int dstsize = ft_strlen(dest);
	i = 0;
	
	while (src[i] != '\0' && i < size)
	{
		dest[dstsize + i] = src[i];
		i++;
	}
	dest[dstsize + i] = '\0';
	return (dstsize + i);
}

// #include<stddef.h>
// #include<stdlib.h>
// #include <stdio.h>
// int main()
// {
//     size_t i = 0;
//     char destination[] = "Salut";
//     char s[] = "bonjour";
//     printf("%ld", ft_strlcat(destination, s, i));
// }