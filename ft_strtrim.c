/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphox <raphox@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:32:12 by rafaria           #+#    #+#             */
/*   Updated: 2023/11/21 16:44:36 by raphox           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}

int	ft_checkset(char const *set, char const to_find,  int size)
{
	int	i;

	i = 0;
	while (set[i] && i < size)
	{
		if (set[i] == to_find)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int		min;
	unsigned int		max;
	unsigned int		fine;
	unsigned int		size;
	char	*main_str;

	size = ft_strlen(s1);
	min = 0;
	max = 0;
	fine = ft_strlen(s1);
	while (ft_checkset(set, s1[min], size) == 1)
		min++;
	while (ft_checkset(set, s1[fine - 1], size) == 1)
	{
		fine--;
		max++;
	}
	main_str = malloc(sizeof(char) * (size - min - max + 1));
	fine = 0;
	while (min < (size - max))
	{
		main_str[fine] = s1[min];
		fine++;
		min++;
	}
	main_str[fine] = '\0';
	return (main_str);
}

// int	main(void)
// {
// 	char *s;
// 	s = ft_strtrim("   xxxtripouille     xxxx", " x");
// 	printf("%s", s);
// }