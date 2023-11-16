/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:03:37 by rafaria           #+#    #+#             */
/*   Updated: 2023/11/13 15:03:39 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
	int i;
	i = 0;
	const char *sexy;
	sexy = s;
	while (sexy[i])
	{
		if (sexy[i] == c)
		{
			return (((char *)sexy) + i);
		}
		i++;
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	const char * s = "Comment ca va";
	int c = 'a';
	printf("%s", ft_strchr(s, c));
}

check les lettres de facon inpendante.
commencer au debut, puis partir de la fin pour aller vers le debut 