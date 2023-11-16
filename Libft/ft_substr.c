/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphox <raphox@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:57:40 by raphox            #+#    #+#             */
/*   Updated: 2023/11/16 15:21:58 by raphox           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_suka_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	char	*blyat;

	blyat = malloc((sizeof(char)) * (dstsize + 1));
	if (blyat == NULL)
		return (NULL);
	if (!dst || !src)
		return (0);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize))
		{
			blyat[i] = src[i];
			i++;
		}
		blyat[i] = '\0';
	}
	return (blyat);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		zub;
	char	*yup;

	zub = len - start;
	yup = (char *)s;
	return (ft_suka_strlcpy(yup, &s[start], zub));
}

// int main()
// {
// 	char cu[] = "substr function Implementation";
// 	printf("%s",ft_substr(cu, 7, 12));

// }