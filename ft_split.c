/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphox <raphox@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:46:45 by raphox            #+#    #+#             */
/*   Updated: 2023/11/21 18:48:24 by raphox           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int count_charset(char const *s, char set)
{
	int i;
	int count_set;

	i = 0;
	count_set = 0;
	
	while (s[i])
	{
		if (s[i] == set)
			count_set++;
		i++;
	}
	return (count_set);
}
char **ft_split(char const *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	
	
}

int main()
{
	printf("%d", count_charset("bonjour comme ca va bg ?", ' '));
}