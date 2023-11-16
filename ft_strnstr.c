/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphox <raphox@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:56:56 by rafaria           #+#    #+#             */
/*   Updated: 2023/11/16 15:20:53 by raphox           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char *)big);
	while (big[i])
	{
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && j < len)
				j++;
			if (j == len)
				return ((char *)big + i);
		}
		j = 0;
		i++;
	}
	return (0);
}

// #include <unistd.h>

// int	main(void)
// {
// 	char	s1[] = "bonjour comment ca va";
// 	char	s2[] = "comment";
// 	char	*res;

// 	res = ft_strnstr(s1, s2, 4);
// 	printf("%s", res);
// 	printf("\n");
// }
