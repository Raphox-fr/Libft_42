/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:56:56 by rafaria           #+#    #+#             */
/*   Updated: 2023/11/09 17:05:26 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return ((char *)str);
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j] && j < len)
				j++;
			if ( j == len)
				return ((char *)str + i);
		}
		j = 0;
		i++;
	}
	return (0);
}

#include	<string.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
int main(void)
{
	char s1[] = "bonjour comment ca va";
	char s2[] = "comment";
	char *res = ft_strnstr(s1, s2, 4);
	printf("%s", res);
	printf("\n");
}
