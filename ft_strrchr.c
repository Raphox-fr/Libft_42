/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:40:03 by rafaria           #+#    #+#             */
/*   Updated: 2023/11/13 13:16:00 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
	int i;
	i = 0;
	const char *sexy;
	sexy = s;
	while (sexy[i])
	{
		i++;
	}
	while (i > 0)
	{
		if (sexy[i] == c)
		{
			return (((char *)sexy) + i);
		}
		i--;
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	const char * s = "tes trop beau";
	int c = 't';
	printf("%s", ft_strrchr(s, c));
}