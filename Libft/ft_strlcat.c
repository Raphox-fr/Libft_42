/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphox <raphox@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:27:07 by rafaria           #+#    #+#             */
/*   Updated: 2023/11/16 15:15:20 by raphox           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_suka_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

#include <stddef.h>
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	int		dstsize;

	dstsize = ft_suka_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dest[dstsize + i] = src[i];
		i++;
	}
	dest[dstsize + i] = '\0';
	return (dstsize + i);
}

// #include <stddef.h>
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	size_t i = 0;
// 	char destination[] = "Salut";
// 	char s[] = "bonjour";
// 	printf("%ld", ft_strlcat(destination, s, i));
// }