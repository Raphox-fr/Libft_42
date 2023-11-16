/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:36:43 by raphox            #+#    #+#             */
/*   Updated: 2023/11/13 18:43:05 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdio.h>
int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strlcpy(char *blyat, char *dst, const char *src, size_t dstsize)
{
	size_t i;
	int l;
	l = 0;

	if (blyat == NULL)
		return (NULL); 
	if (!dst || !src)
		return (0);
	i = ft_strlen(blyat);

	
	if (dstsize != 0)
	{
		while (src[l] != '\0')
		{
			blyat[i] = src[l];
			i++;
			l++;
		}
		blyat[i] = '\0';
	}
	return (blyat);
}


char *ft_strjoin(char const *s1, char const *s2)
{
	char *dest = (char *)s1;
	char *src = (char *)s2;
	
	int count1 = ft_strlen(dest);
	int count2 = ft_strlen(src);
	
	char *suka;

	suka = malloc ((sizeof(char)) * (count1 + count2) + 1);
	if (suka == NULL)
		return (NULL);
	suka[0] = '\0';

	suka = ft_strlcpy(suka, &dest[0],dest, count1);
	suka = ft_strlcpy(suka, &dest[count1],src, count2);
}

int main()
{
	const char s1[] = "a";
	const char s2[] = "fbhjwgfkjewrngkjl";
	printf("%s",ft_strjoin(s1, s2));
}